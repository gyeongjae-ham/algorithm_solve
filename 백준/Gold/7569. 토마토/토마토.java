import java.io.*;
import java.util.*;

public class Main {   
    static final int[] dx = new int[]{1, -1, 0, 0, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1, 0, 0};
    static final int[] dz = new int[]{0, 0, 0, 0, 1, -1};
    static int[][][] gr;
    static int[][][] vis;
    static StringTokenizer st;
    static Queue<Node> q = new LinkedList<>();
        
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        st = new StringTokenizer(br.readLine());
        
        int m = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());
        int h = Integer.parseInt(st.nextToken());
        
        gr = new int[h][n][m];
        vis = new int[h][n][m];
        
        for(int d=0; d<h; d++) {
            for(int i=0; i<n; i++) {
                gr[d][i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            }
        }
        
        for(int d=0; d<h; d++){
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(gr[d][i][j] == 1) {
                        vis[d][i][j] = 1;
                        q.add(new Node(d, i, j));
                    }
                }
            }
        }
        
        while (!q.isEmpty()) {
            Node c = q.remove();
            
            int x = c.getX();
            int y = c.getY();
            int z = c.getZ();
            
            for(int d=0; d<6; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                int nz = z + dz[d];
                
                if(nx<0 || nx>=n || ny<0 || ny>=m || nz<0 || nz>=h) continue;
                if(vis[nz][nx][ny] == 1 || gr[nz][nx][ny] != 0) continue;
                
                vis[nz][nx][ny] = 1;
                gr[nz][nx][ny] = gr[z][x][y] + 1;
                q.add(new Node(nz, nx, ny));
            }
        }
        
        int ans = 0;
        for(int d=0; d<h; d++){
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(gr[d][i][j] == 0) {
                        System.out.println(-1);
                        System.exit(0);
                    }
                    ans = Math.max(ans, gr[d][i][j]);
                }
            }
        }
        
        System.out.println(ans-1);
    }   
    
    private static class Node {
        private int z;
        private int x;
        private int y;
        
        public Node(int z, int x, int y) {
            this.z = z;
            this.x = x;
            this.y = y;
        }
        
        public int getX() {
            return x;
        }
        public int getY() {
            return y;
        }
        public int getZ() {
            return z;
        }
    }
}