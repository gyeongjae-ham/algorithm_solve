import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        st = new StringTokenizer(br.readLine());
        int[] arr = new int[3];
        
        for(int i=0;i<3;i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        
        for(int i=0;i<3;i++) {
            bw.write(String.valueOf(arr[i])+" ");
        }

        bw.flush();
        bw.close();
    }
}