import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());
        Stack<Integer> stk = new Stack<>();
        
        for(int i=0; i<n; i++) {
            int cmd = Integer.parseInt(br.readLine());
            if(cmd == 0) stk.pop();
            else stk.add(cmd);
        }
        
        int sum = 0;
        for(int v : stk) {
            sum += v;
        }
        System.out.println(sum);
    }
}