import java.io.*;
import java.util.*;

public class Main {
    static class Node {
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
    static final int[] dx = new int[]{1, -1, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1};
    
    static void bfs(int f, int b) {
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
                if(gr[nx][ny] == 0 || gr[nx][ny] > 1) continue;
                
                gr[nx][ny] = gr[x][y] + 1;
                q.add(new Node(nx, ny));
            }
        }
    }
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        
        gr = new int[n][m];
        for(int i=0; i<n; i++) {
            gr[i] = Arrays.stream(br.readLine().split("")).mapToInt(Integer::parseInt).toArray();
        }
        
        gr[0][0] = 0;
        bfs(0, 0);
        
        System.out.println(gr[n-1][m-1]+1);
    }   
}