import java.io.*;
import java.util.*;

public class Main {   
    static final int[] dx = new int[]{1, -1, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1};
    static char[][] gr;
    static int[][] fv;
    static int[][] sv;
    static StringTokenizer st;
    static Queue<Node> fq;
    static Queue<Node> sq;
        
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        
        while (T-- > 0) {
            // 입력값 초기화
            st = new StringTokenizer(br.readLine());
            int w = Integer.parseInt(st.nextToken());
            int h = Integer.parseInt(st.nextToken());
        
            // 방문 기록, 그래프 초기화
            gr = new char[h][w];
            fv = new int[h][w];
            sv = new int[h][w];
            
            // 큐 초기화
            fq = new LinkedList<>();
            sq = new LinkedList<>();
            
            // 그래프 입력
            for(int i=0; i<h; i++) {
                gr[i] = br.readLine().toCharArray();
            }
            
            // 불, 사람 위치 담기
            for(int i=0; i<h; i++) {
                for(int j=0; j<w; j++) {
                    if(gr[i][j] == '*') {
                        fv[i][j] = 1;
                        fq.add(new Node(i, j));
                    }
                    if(gr[i][j] == '@') {
                        sv[i][j] = 1;
                        sq.add(new Node(i, j));
                    }
                }
            }
            
            // 불 부터 이동 시키기
            while (!fq.isEmpty()) {
                Node fc = fq.remove();
                int x = fc.getX();
                int y = fc.getY();
                
                for(int d=0; d<4; d++) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];
                    
                    if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
                    if(fv[nx][ny] >= 1 || gr[nx][ny] == '#') continue;
                    
                    fv[nx][ny] = fv[x][y] + 1;
                    fq.add(new Node(nx, ny));
                }
            }
            
            // 탈출 변수
            boolean exit = false;
            // 사람 이동 시키기
            while (!sq.isEmpty() && !exit) {
                Node sc = sq.remove();
                int x = sc.getX();
                int y = sc.getY();
                
                for(int d=0; d<4; d++) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];
                    
                    // 탈출 성공
                    if(nx<0 || nx>=h || ny<0 || ny>=w) {
                        System.out.println(sv[x][y]);
                        exit = true;
                        break;
                    }
                    
                    if(sv[nx][ny] >= 1 || gr[nx][ny] == '#') continue;
                    if(fv[nx][ny] >= 1 && fv[nx][ny] <= sv[x][y] + 1) continue;
                    
                    sv[nx][ny] = sv[x][y] + 1;
                    sq.add(new Node(nx, ny));
                }
            }
            
            if (!exit) System.out.println("IMPOSSIBLE");
        }
        
    }   
    
    private static class Node {
        private int x;
        private int y;
        
        public Node(int x, int y) {
            this.x = x;
            this.y = y;
        }
        
        public int getX() {
            return x;
        }
        public int getY() {
            return y;
        }
    }
}