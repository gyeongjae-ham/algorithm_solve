import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        
        int sum = a+b;
        int sub = a-b;
        int mul = a*b;
        int div = a/b;
        int res = a%b;
        
        bw.write(String.valueOf(sum));
        bw.newLine();
        bw.write(String.valueOf(sub));
        bw.newLine();
        bw.write(String.valueOf(mul));
        bw.newLine();
        bw.write(String.valueOf(div));
        bw.newLine();
        bw.write(String.valueOf(res));

        bw.flush();
        bw.close();
    }
}