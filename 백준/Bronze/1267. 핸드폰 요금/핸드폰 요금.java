import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int m=0, y=0;
        for(int i=0;i<n;i++) {
            int num = Integer.parseInt(st.nextToken());
            m += (num/60 + 1) * 15;
            y += (num/30 + 1) * 10;
        }
        if(m < y) sb.append("M ");
        else if(y < m) sb.append("Y ");
        else sb.append("Y M ");
        sb.append(Math.min(m,y));
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}