import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        int tg = (int)Math.sqrt(n) + 1;
        
        for(int i=2;i<tg;i++) {
            while (n % i == 0) {
                bw.write(i + "\n");
                n /= i;
            }
        }
        
        if (n > 1) {
            bw.write(n + "\n");
        }
        
        bw.flush();
        bw.close();
    }
}
