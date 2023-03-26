import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int min = 101;
        int sum = 0;
        for(int i=0;i<7;i++) {
            int a = Integer.parseInt(br.readLine());
            if(a%2!=0) {
                sum+=a;
                min = Math.min(min, a);
            }
        }
        if (sum!=0) {
            bw.write(String.valueOf(sum));
            bw.newLine();
            bw.write(String.valueOf(min));
        }
        else bw.write("-1");
        
        bw.flush();
        br.close();
        bw.close();
    }
}