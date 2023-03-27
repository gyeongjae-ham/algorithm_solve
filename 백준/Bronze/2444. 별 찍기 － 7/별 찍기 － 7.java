import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        for(int i=1;i<=n;i++){
            for(int r=n-i;r>0;r--){
                sb.append(" ");
            }
            for(int l=1;l<=2*i-1;l++){
                sb.append("*");
            }
            sb.append('\n');
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                sb.append(" ");
            }
            for(int k=2*(n-i)-1;k>0;k--){
                sb.append("*");
            }
            sb.append("\n");
        }
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}