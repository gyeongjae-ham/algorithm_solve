import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int arr[] = new int[21];
        for(int i = 1; i<21; i++) {
            arr[i] = i;
        }
        for(int i = 0; i<10; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a1 = Integer.parseInt(st.nextToken());
            int a2 = Integer.parseInt(st.nextToken());
       
            int mid = (a2 - a1) / 2;
       
            for(int j=0; j<=mid; j++) {
                int tmp = arr[a1 + j];
                arr[a1 + j] = arr[a2 - j];
                arr[a2 - j] = tmp;
            }
        }
        
        for(int i = 1; i<21; i++) {
            sb.append(String.valueOf(arr[i]) + " ");
        }
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}