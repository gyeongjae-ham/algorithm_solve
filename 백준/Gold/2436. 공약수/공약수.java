import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        long gcdN = Long.parseLong(st.nextToken());
        long lcdN = Long.parseLong(st.nextToken());
        br.close();
        
        long A = gcdN;
        long B = lcdN;
        long ab = (long) gcdN * lcdN;
        
        for(long i=gcdN; i*i<ab; i+=gcdN) {
            long b = (long) (ab / i);
            if (ab % i == 0 && gcd(i, b) == gcdN) {
                if (A + B > i + b) {
                    A = i;
                    B = b;
                }
            } 
        }
        
        bw.write(A + " " + B);
        bw.flush();
        bw.close();
    }
    
    public static long gcd(long a, long b) {
        long r = (long)a % b;
        return r == 0 ? b : gcd(b, r);
    }
}
