import java.io.*;
import java.util.*;

public class Main {
    public static void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int[] arr = new int[10];
        int mul = 1;
        for(int i=0;i<3;i++) {
            int num = Integer.parseInt(br.readLine());
            mul *= num;
        }
        String val = String.valueOf(mul);
        
        for(int i=0;i<val.length();i++) {
            arr[(int)val.charAt(i) - 48]++;
        }
        
        for(int v : arr) {
            sb.append(v).append("\n");
        }
        
        System.out.print(sb);
        br.close();
    }
    
    public static void main(String[] args) throws IOException {
        Main.solution();
    }
}