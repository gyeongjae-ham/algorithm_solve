import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;
        for(int i=0; i<n; i++) {
            String[] line = br.readLine().split("");
            Stack<String> stk = new Stack<>();
            
            for(String v : line) {
                if(stk.isEmpty()) stk.add(v);
                else {
                    if(stk.peek().equals(v)) stk.pop();
                    else stk.add(v);
                }
            }
            
            if (stk.size() == 0) cnt++;
        }
        
        System.out.println(cnt);
    }
}