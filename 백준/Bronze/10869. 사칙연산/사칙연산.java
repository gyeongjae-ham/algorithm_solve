import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
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
        br.close();
        bw.close();
    }
}