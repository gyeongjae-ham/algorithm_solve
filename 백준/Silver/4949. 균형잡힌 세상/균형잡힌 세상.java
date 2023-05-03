import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        while(true) {
            String[] line = br.readLine().split("");
            if (line[0].equals(".")) break;
            
            Stack<String> stk = new Stack<>();
            
            for(String c : line) {
                switch (c) {
                    case "(":
                        stk.add(c);
                        break;
                    case "[":
                        stk.add(c);
                        break;
                    case ")":
                        if (!stk.isEmpty() && stk.peek().equals("(")) stk.pop();
                        else stk.add(c);
                        break;
                    case "]":
                        if (!stk.isEmpty() && stk.peek().equals("[")) stk.pop();
                        else stk.add(c);
                        break;
                }
            }
            
            if (stk.size() == 0) System.out.println("yes");
            else System.out.println("no");
        }
    }
}