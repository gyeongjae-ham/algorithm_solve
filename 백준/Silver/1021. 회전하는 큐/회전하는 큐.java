import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        StringBuilder sb = new StringBuilder();
        
        LinkedList<Integer> dq = new LinkedList<>();
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        for(int i=1; i<=n; i++) dq.addLast(i);
        
        st = new StringTokenizer(br.readLine(), " ");
        int cnt = 0;
        while(m-- > 0) {
            int tn = Integer.parseInt(st.nextToken());
            int idx = dq.indexOf(tn);
            
            while(dq.getFirst() != tn) {
                if(idx < dq.size() - idx) {
                    dq.addLast(dq.removeFirst());
                }
                else {
                    dq.addFirst(dq.removeLast());
                }
                cnt++;
            }
            
            dq.removeFirst();
        }
        System.out.println(cnt);
    }
}