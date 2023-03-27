import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int[] arr = new int[26];
        String s = br.readLine();
        for(int i=0;i<s.length();i++) {
            arr[(int)s.charAt(i) - 97]++;
        }
        for(int i=0;i<arr.length;i++) {
            sb.append(arr[i]).append(" ");
        }
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}