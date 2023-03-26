import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int[] arr = new int[5];
        int sum = 0;
        for(int i=0;i<5;i++) {
            int num = Integer.parseInt(br.readLine());
            arr[i] = num;
            sum += num;
        }
        Arrays.sort(arr);
        sb.append(String.valueOf(sum/5) + "\n");
        sb.append(arr[2]);
        System.out.print(sb);
        
        br.close();
    }
}