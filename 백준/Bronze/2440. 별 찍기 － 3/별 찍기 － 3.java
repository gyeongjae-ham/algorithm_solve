import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        for(int i=1;i<=n;i++){
            for(int k=n-i+1;k>0;k--){
                sb.append("*");
            }
            sb.append('\n');
        }
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}