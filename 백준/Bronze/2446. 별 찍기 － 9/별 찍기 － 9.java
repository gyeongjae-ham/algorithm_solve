import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        for(int i=0; i<n-1; i++) {
            for(int j=0; j<i; j++) sb.append(' ');
            for(int j=0; j<2*(n-i)-1; j++) sb.append('*');
            sb.append("\n");
        }
        
        for(int j = 0; j < n - 1; j++) sb.append(' ');
        sb.append("*\n");
    
        for(int i = 1; i <= n-1; i++) {
            for(int j=1; j<=n-i-1; j++) sb.append(' ');
            for(int j=1; j<=2*i+1; j++) sb.append('*');
            sb.append('\n');;
        }
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}