import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        // StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        while(n-- != 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int sum = a+b;
            bw.write(String.valueOf(sum) + "\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}