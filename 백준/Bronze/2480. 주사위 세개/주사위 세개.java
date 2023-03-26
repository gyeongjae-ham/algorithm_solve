import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());
        
        if(a==b && a==c) {
            int res = 10000 + a*1000;
            bw.write(String.valueOf(res));
        }
        else if(a==b && a!=c) {
            int res = 1000 + a*100;
            bw.write(String.valueOf(res));
        }
        else if(b==c && b!=a) {
            int res = 1000 + b*100;
            bw.write(String.valueOf(res));
        }
        else if(a==c && a!=b) {
            int res = 1000 + a*100;
            bw.write(String.valueOf(res));
        }
        else {
            if(a>b && a>c) {
                int res = a*100;
                bw.write(String.valueOf(res));
            }
            else if(b>a && b>c) {
                int res = b*100;
                bw.write(String.valueOf(res));
            }
            else {
                int res = c*100;
                bw.write(String.valueOf(res));
            }
        }
        
        
        bw.flush();
        br.close();
        bw.close();
    }
}