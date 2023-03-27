import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int max = 0;
        int cnt = 1;
        for(int i=0;i<9;i++) {
            int num = Integer.parseInt(br.readLine());
            if(num > max) {
                max = num;
                cnt = i+1;
            }
        }
        sb.append(String.valueOf(max) + "\n");
        sb.append(cnt);
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}