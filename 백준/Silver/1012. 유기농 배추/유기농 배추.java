import java.io.*;
import java.util.*;

public class Main {
    static final int[] dx = new int[]{1, -1, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1};
    static int n;
    static int m;
    static int k;
    static int[][] gr;
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        
        int t = Integer.parseInt(br.readLine());
        
        for(int i=0; i<t; i++) {
            st = new StringTokenizer(br.readLine());
            
            m = Integer.parseInt(st.nextToken());
            n = Integer.parseInt(st.nextToken());
            k = Integer.parseInt(st.nextToken());
            gr = new int[n][m];
                
            for(int s=0; s<n; s++) Arrays.fill(gr[i], 0);
            
            for(int j=0; j<k; j++) {
                st = new StringTokenizer(br.readLine());
                int b = Integer.parseInt(st.nextToken());
                int f = Integer.parseInt(st.nextToken());
                
                gr[f][b] = 1;
            }
            
            int cnt = 0;
            for(int j=0; j<n; j++) {
                for(int s=0; s<m; s++) {
                    if(gr[j][s] == 1) {
                        cnt++;
                        gr[j][s] = 0;
                        bfs(j, s);
                    }
                }
            }
            
            System.out.println(cnt);
        }
        
    }   
    
    private static void bfs(int f, int b) {
        Queue<Node> q = new LinkedList<>();
        q.add(new Node(f, b));
        
        while(!q.isEmpty()) {
            Node cur = q.remove();
            int x = cur.getX();
            int y = cur.getY();
            
            for(int d=0; d<4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                
                if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                if(gr[nx][ny] == 0) continue;
                
                gr[nx][ny] = 0;
                q.add(new Node(nx, ny));
            }
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