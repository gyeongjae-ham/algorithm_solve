import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int mn = 101;
        int sum = 0;
        
        for(int i=0;i<7;i++) {
            st = new StringTokenizer(br.readLine());
            int num = Integer.parseInt(st.nextToken());
            
            if(num%2!=0) {
                sum+=num;
                mn = Math.min(mn, num);
            }
        }
        
        if (sum!=0) {
            bw.write(String.valueOf(sum));
            bw.newLine();
            bw.write(String.valueOf(mn));
        }
        else {
            bw.write("-1");
        }
        
        bw.flush();
        bw.close();
        br.close();
    }
}