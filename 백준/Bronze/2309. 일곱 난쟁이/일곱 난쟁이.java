import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    static int spy1;
    static int spy2;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int[] arr = new int[9];
        int sum = 0;
        
        for(int i=0;i<9;i++) {
            arr[i] = Integer.parseInt(br.readLine());
            sum+=arr[i];
        }
        
        for(int i=0;i<arr.length-1;i++) {
            for(int j=i+1;j<arr.length;j++) {
                if(sum - arr[i] - arr[j] == 100) {
                    spy1 = arr[i];
                    spy2 = arr[j];
                    break;
                }
            }
        }
        
        Arrays.sort(arr);
        for(int k=0;k<arr.length;k++) {
            if(spy1==arr[k]||spy2==arr[k]) continue;
            bw.write(String.valueOf(arr[k]));
            bw.newLine();
        }
        
        bw.flush();
        bw.close();
        br.close();
    }
}