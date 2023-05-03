import java.io.*;
import java.util.*;

public class Main {
    static final int[] dx = new int[]{1, -1, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1};
    static int n;
    static String[][] gr;
    static int[][] vis;
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        n = Integer.parseInt(br.readLine());
        gr = new String[n][n];
        vis = new int[n][n];

        for(int i=0; i<n; i++) gr[i] = br.readLine().split("");
        
        int fv = area();
        
        for(int i=0; i<n; i++) Arrays.fill(vis[i], 0);
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(gr[i][j].equals("G")) {
                    gr[i][j] = "R";
                }
            }
        }
        
        int bv = area();
        
        System.out.printf("%d %d", fv, bv);
    }
    
    private static int area() {
        int cnt = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(vis[i][j] == 0) {
                    cnt++;
                    bfs(i, j);
                }
            }
        }
        
        return cnt;
    }
    
    private static void bfs(int f, int b) {
        Queue<Node> q = new LinkedList<>();
        vis[f][b] = 1;
        q.add(new Node(f, b));
        
        while(!q.isEmpty()) {
            Node cur = q.remove();
            int curX = cur.getX();
            int curY = cur.getY();
            
            for(int d=0; d<4; d++) {
                int nx = curX + dx[d];
                int ny = curY + dy[d];
                
                if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                if(vis[nx][ny] == 1 || !gr[nx][ny].equals(gr[curX][curY])) continue;
                
                vis[nx][ny] = 1;
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