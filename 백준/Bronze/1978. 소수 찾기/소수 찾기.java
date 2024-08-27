import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int ans = 0;
        for (int i=0; i<n; i++) {
            
            int tmp = Integer.parseInt(st.nextToken());
            
            if (tmp == 1) {
                continue;
            }
            
            int tg = (int)Math.sqrt(tmp) + 1;
            
            int cnt = 0;
            for (int j=1; j<tg; j++) {
                if (tmp % j == 0) {
                    cnt++;
                }
            }
            
            if (cnt == 1) {
                ans++;
            }
        }
        
        bw.write(ans + "\n");
        bw.flush();
        bw.close();
    }
}
