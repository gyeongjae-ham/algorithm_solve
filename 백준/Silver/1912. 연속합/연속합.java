import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=0; i<n;i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        
        int[] pfx = new int[n+1];
        Arrays.fill(pfx, Integer.MIN_VALUE+1001);

        for(int i=0;i<n;i++) {
            pfx[i+1] = Math.max(pfx[i] + arr[i], arr[i]);
        }
        
        bw.write(Arrays.stream(pfx).max().orElseThrow() + "");
        bw.flush();
        bw.close();
    }
}
