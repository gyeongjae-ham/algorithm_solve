import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        Deque<Integer> dq = new LinkedList<>();
        
        for(int i=0; i<n; i++) {
            String[] cmd = br.readLine().split(" ");
            switch(cmd[0]) {
                case "push_front":
                    dq.addFirst(Integer.parseInt(cmd[1]));
                    break;
                case "push_back":
                    dq.addLast(Integer.parseInt(cmd[1]));
                    break;
                case "pop_front":
                    if(!dq.isEmpty()) sb.append(dq.removeFirst()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                case "pop_back":
                    if(!dq.isEmpty()) sb.append(dq.removeLast()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                case "size":
                    sb.append(dq.size()).append('\n');
                    break;
                case "empty":
                    if(dq.isEmpty()) sb.append(1).append('\n');
                    else sb.append(0).append('\n');
                    break;
                case "front":
                    if(!dq.isEmpty()) sb.append(dq.getFirst()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                case "back":
                    if(!dq.isEmpty()) sb.append(dq.getLast()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                default: break;
            }
        }
        System.out.println(sb.toString());
    }
}