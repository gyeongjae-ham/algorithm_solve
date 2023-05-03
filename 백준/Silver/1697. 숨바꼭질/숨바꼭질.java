import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        
        int[] gr = new int[100002];
        // for(int i=0; i<100000; i++) gr[i] = -1;
        Arrays.fill(gr, -1);
        
        Queue<Integer> q = new LinkedList<>();
        gr[n] = 0;
        q.add(n);
        
        while(gr[k] == -1) {
            int x = q.remove();
            for(int d=0; d<3; d++) {
                int nx;
                if(d == 0) nx = x - 1;
                else if(d == 1) nx = x + 1;
                else nx = x * 2;
                
                if(nx < 0 || nx > 100000 || gr[nx] != -1) continue;
                
                if(gr[nx] == -1) {
                    gr[nx] = gr[x] + 1;
                    q.add(nx);    
                }            
            }
        }
        
        System.out.println(gr[k]);
    }   
}