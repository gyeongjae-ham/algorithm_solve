import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        Deque<Integer> q = new LinkedList<>();
        
        for(int i=0; i<n; i++) {
            String[] cmd = br.readLine().split(" ");
            
            switch (cmd[0]) {
                case "push":
                    q.addLast(Integer.parseInt(cmd[1]));
                    break;
                case "pop":
                    if(!q.isEmpty()) sb.append(q.removeFirst()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                case "size":
                    sb.append(q.size()).append('\n');
                    break;
                case "empty":
                    if(q.isEmpty()) sb.append(1).append('\n');
                    else sb.append(0).append('\n');
                    break;
                case "front":
                    if(!q.isEmpty()) sb.append(q.getFirst()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                case "back":
                    if(!q.isEmpty()) sb.append(q.getLast()).append('\n');
                    else sb.append(-1).append('\n');
                    break;
                default: break;
            }
        }
        System.out.println(sb.toString());
    }
}