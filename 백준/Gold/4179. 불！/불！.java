import java.io.*;
import java.util.*;

public class Main {
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
    
    static final int[] dx = new int[]{1, -1, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1};
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int r = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());
        
        String[][] gr = new String[r][c];
        for(int i=0; i<r; i++) gr[i] = br.readLine().split("");
        
        Queue<Node> fq = new LinkedList<>();
        Queue<Node> jq = new LinkedList<>();
        int[][] fv = new int[r][c];
        int[][] jv = new int[r][c];
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++) {
                fv[i][j] = -1;
                jv[i][j] = -1;
            }
        }
        
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(gr[i][j].equals("F")) {
                    fv[i][j] = 0;
                    fq.add(new Node(i, j));
                }
                if(gr[i][j].equals("J")) {
                    jv[i][j] = 0;
                    jq.add(new Node(i, j));  
                } 
            }
        }
        
        while(!fq.isEmpty()) {
            Node fc = fq.remove();
            int fx = fc.getX();
            int fy = fc.getY();
            
            for(int d=0; d<4; d++) {
                int fnx = fx + dx[d];
                int fny = fy + dy[d];
                
                if(fnx<0 || fnx>=r || fny<0 || fny>=c) continue;
                if(fv[fnx][fny] >= 0 || gr[fnx][fny].equals("#")) continue;
                
                fv[fnx][fny] = fv[fx][fy] + 1;
                fq.add(new Node(fnx, fny));
            }
        }
        
        while(!jq.isEmpty()) {
            Node cur = jq.remove();
            int x = cur.getX();
            int y = cur.getY();
            
            for(int d=0; d<4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                
                if(nx<0 || nx>=r || ny<0 || ny>=c) {
                    System.out.println(jv[x][y] + 1);
                    System.exit(0);
                }
                
                if(gr[nx][ny].equals("#") || jv[nx][ny] >= 0) continue;
                if(fv[nx][ny] != -1 && fv[nx][ny] <= jv[x][y] + 1) continue;
                
                jv[nx][ny] = jv[x][y] + 1;
                jq.add(new Node(nx, ny));
            }
        }
        
        System.out.println("IMPOSSIBLE");
    }   
}