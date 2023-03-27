import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        for(int i=0;i<n;i++) {
            int num = Integer.parseInt(st.nextToken());
            arr[i] = num;
        }
        Arrays.sort(arr);
        
        int x = Integer.parseInt(br.readLine());
        int l=0, r=arr.length-1, cnt=0;
        while (l<r) {
            if(arr[l]+arr[r]<x) l++;
            else if(arr[l]+arr[r]>x) r--;
            else if(arr[l]+arr[r]==x) {
                cnt++;
                l++;
                r--;
            }
        }
        sb.append(cnt);
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}