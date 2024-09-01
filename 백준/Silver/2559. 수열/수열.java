import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int days = Integer.parseInt(st.nextToken());
        int term = Integer.parseInt(st.nextToken());
        
        st = new StringTokenizer(br.readLine());
        int[] temps = new int[days];
        
        // prefix는 1개 더 크게 만드는게 팁
        int[] prefix = new int[days + 1];
        for(int i=0; i<days; i++) {
            temps[i] = Integer.parseInt(st.nextToken());
            prefix[i+1] = prefix[i] + temps[i];
        }
        
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=term; i<days+1; i++) {
            ans.add(prefix[i] - prefix[i-term]);
        }
        
        bw.write(Collections.max(ans) + "");
        bw.flush();
        bw.close();
    }
    
}
