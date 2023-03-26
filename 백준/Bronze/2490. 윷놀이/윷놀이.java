import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String[] arr = {"D", "C", "B", "A", "E"};
        int n = 3;
        while(n-- != 0) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int sum = 0;
            for(int i=0;i<4;i++) {
                int num = Integer.parseInt(st.nextToken());
                sum += num;
            }
            bw.write(arr[sum]);
            bw.newLine();
        }
        
        bw.flush();
        br.close();
        bw.close();
    }
}