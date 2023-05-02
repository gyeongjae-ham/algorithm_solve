import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        Stack<Character> lstk = new Stack<>();
        Stack<Character> rstk = new Stack<>();

        String str = br.readLine();
        int n = Integer.parseInt(br.readLine());
        
        // lstk 초기화
        for (int i=0; i<str.length(); i++) {
            lstk.push(str.charAt(i));
        }
        
        for (int i=0; i<n; i++) {
            String cmds = br.readLine();
            char cmd = cmds.charAt(0);
            
            switch (cmd) {
                case 'P':
                    lstk.push(cmds.charAt(2));
                    break;
                case 'B':
                    if(!lstk.isEmpty()) lstk.pop();
                    break;
                case 'L':
                    if(!lstk.isEmpty()) rstk.push(lstk.pop());
                    break;
                case 'D':
                    if(!rstk.empty()) lstk.push(rstk.pop());
                    break;
                default: break;
            }
        }
        
        while(!lstk.empty()) {
            rstk.push(lstk.pop());
        }
        while(!rstk.empty()) {
            sb.append(rstk.pop());
        }
        
        System.out.println(sb.toString());
        br.close();
    }
}