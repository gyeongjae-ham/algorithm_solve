import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        st = new StringTokenizer(br.readLine());
        long a = Long.parseLong(st.nextToken());
        long b = Long.parseLong(st.nextToken());
        
        long mn = 0;
        
        if(a>b) {
            long temp = b;
            b = a;
            a = temp;
            mn = b-a-1;
        }
        else if(a==b) mn = 0;
        else mn = b-a-1;
        
        
        bw.write(String.valueOf(mn));
        bw.newLine();
        
        for(long i=a+1;i<b;i++) {
            bw.write(String.valueOf(i)+" ");
        }
        
        bw.flush();
        bw.close();
        br.close();
    }
}