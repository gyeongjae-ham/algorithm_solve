import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        br.close();
        
        long ans = 0;
        
        // n까지 i를 약수로 가지는 수의 개수는 n / i 여기서 자기 자신은 실질적 약수가 아니니까
        // 1을 빼주고, 실질적 약수들의 합을 구해야 하니까 i를 곱해서 더해준다
        // 마지막에 1,000,000 으로 나눈 나머지를 출력한다
        for(int i=2; i<n; i++) {
            ans += ((n / i) - 1) * i;
        }
        
        ans = ans % 1000000;
        bw.write(ans + "");
        bw.flush();
        bw.close();
    }
    
}
