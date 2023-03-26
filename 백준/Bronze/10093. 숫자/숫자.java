import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        if(a>b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        
        if(a==b) sb.append(0);
        else {
            sb.append(b-a-1);
            sb.append('\n');
            for(int i=a+1;i<b;i++) {
                sb.append(String.valueOf(i) + " ");
            }    
        }
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}