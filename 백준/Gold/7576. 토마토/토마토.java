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
    
    static int n;
    static int m;
    static int[][] gr;
    static Queue<Node> q = new LinkedList<>();
    static final int[] dx = new int[]{1, -1, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1};
    
    private static int bfs() {
        while(!q.isEmpty()) {
            Node cur = q.remove();
            int x = cur.getX();
            int y = cur.getY();
            
            for(int d=0; d<4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                
                if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                if(gr[nx][ny] == -1 || gr[nx][ny] >= 1) continue;
                if(gr[nx][ny]==0) {
                    gr[nx][ny] = gr[x][y] + 1;
                    q.add(new Node(nx, ny));    
                }
            }
        }
        
        int max = Integer.MIN_VALUE;
        for(int[] vg : gr) {
            for(int v : vg) {
                if(v == 0) return -1;
                else {
                    max = Math.max(max, v-1);
                }
            }
        }
        
        return max;
    }
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        m = Integer.parseInt(st.nextToken());
        n = Integer.parseInt(st.nextToken());
        
        gr = new int[n][m];
        for(int i=0; i<n; i++) {
            gr[i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) {
                if(gr[i][j] == 1) {
                    q.add(new Node(i, j));
                }
            }
        }
        
        System.out.println(bfs());
    }   
}