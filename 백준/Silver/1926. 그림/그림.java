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
    
    static final int[] dx = new int[]{1, -1, 0, 0};
    static final int[] dy = new int[]{0, 0, 1, -1};
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        
        // 그래프 초기화
        int[][] gr = new int[n][m];
        int[][] vis = new int[n][m];
        for(int i=0; i<n; i++) {
            gr[i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        }
        
        int mx = 0;
        int num = 0;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(gr[i][j] == 0 || vis[i][j] == 1) continue;
                num++;
                Queue<Node> q = new LinkedList<>();
                vis[i][j] = 1;
                q.add(new Node(i,j));
                int area = 0;
                
                while(!q.isEmpty()) {
                    area++;
                    
                    Node cur = q.remove();
                    int x = cur.getX();
                    int y = cur.getY();
                    
                    for(int d=0; d<4; d++) {
                        int nx = x + dx[d];
                        int ny = y + dy[d];
                        
                        if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                        if(vis[nx][ny] == 1 || gr[nx][ny]!=1) continue;
                        vis[nx][ny] = 1;
                        q.add(new Node(nx, ny));
                    }
                }
                
                mx = Math.max(mx, area);
            }
        }
        
        System.out.println(num);
        System.out.println(mx);
    }
}