import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int[] arr = new int[10];
        int n = Integer.parseInt(br.readLine());
        int ans = 0;
        
        while(n > 0) {
            arr[n%10]++;
            n /= 10;
        }
        for(int i=0;i<10;i++) {
            if(i==6 || i==9) continue;
            ans = Math.max(ans, arr[i]);
        }
        ans = Math.max(ans, (arr[6]+arr[9]+1)/2);
        sb.append(ans);
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}