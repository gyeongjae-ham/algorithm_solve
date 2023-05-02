import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        Stack<Integer> stk = new Stack<>();
        int n = Integer.parseInt(br.readLine());
        for(int i=0; i<n; i++) {
            String[] cmd = br.readLine().split(" ");
            switch(cmd[0]) {
                case "push":
                    stk.add(Integer.parseInt(cmd[1]));
                    break;
                case "top":
                    if (!stk.isEmpty()) sb.append(stk.peek()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                case "size":
                    sb.append(stk.size()).append('\n');
                    break;
                case "empty":
                    if (stk.isEmpty()) sb.append(1).append('\n');
                    else sb.append(0).append('\n');
                    break;
                case "pop":
                    if (!stk.isEmpty()) sb.append(stk.pop()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                default: break;
            }
        }
        System.out.println(sb.toString());
    }
}