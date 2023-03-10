import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int[] arr = new int[5];
        int sum = 0;
        
        for(int i=0;i<5;i++) {
            st = new StringTokenizer(br.readLine());
            int num = Integer.parseInt(st.nextToken());
            arr[i] = num;
            sum+=num;
        }
        
        int avg = sum/5;
        
        Arrays.sort(arr);
        
        bw.write(String.valueOf(avg));
        bw.newLine();
        bw.write(String.valueOf(arr[2]));
        
        bw.flush();
        bw.close();
        br.close();
    }
}