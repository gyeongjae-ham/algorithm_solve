import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int[] arr = new int[9];
        int spy1 = 0, spy2 = 0;
        for(int i=0;i<9;i++) {
            int a = Integer.parseInt(br.readLine());
            arr[i] = a;
        }
        int sum = Arrays.stream(arr).sum();
        for(int i=0;i<8;i++) {
            for(int j=i+1;j<9;j++) {
                if(sum - arr[i] - arr[j] == 100) {
                    spy1 = arr[i];
                    spy2 = arr[j];
                    break;
                }
            }
        }
        
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++) {
            if(arr[i]==spy1 || arr[i]==spy2) continue;
            sb.append(arr[i]);
            sb.append('\n');
        }
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}