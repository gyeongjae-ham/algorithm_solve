import java.io.*;
import java.util.*;

public class Main {   
    static final int[] dx = new int[]{1, 2, -1, -2, -2, -1, 1, 2};
    static final int[] dy = new int[]{2, 1, 2, 1, -1, -2, -2, -1};
    static int[][] gr = new int[303][303];
    static StringTokenizer st;
    static Queue<Node> q;
        
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int T = Integer.parseInt(br.readLine());
        
        while (T-- > 0) {
            int n = Integer.parseInt(br.readLine());
            
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            
            st = new StringTokenizer(br.readLine());
            int px = Integer.parseInt(st.nextToken());
            int py = Integer.parseInt(st.nextToken());
            
            q = new LinkedList<>();
            
            for(int i=0; i<n; i++) Arrays.fill(gr[i], -1);
            
            gr[x][y] = 0;
            q.add(new Node(x, y));
            
            while (!q.isEmpty()) {
                Node cur = q.remove();
                int f = cur.getX();
                int b = cur.getY();
                
                for(int d=0; d<8; d++) {
                    int nx = f + dx[d];
                    int ny = b + dy[d];
                    
                    if (nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if (gr[nx][ny] >= 0) continue;
                    
                    gr[nx][ny] = gr[f][b] + 1;
                    q.add(new Node(nx, ny));
                }
            }
            
            System.out.println(gr[px][py]);
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