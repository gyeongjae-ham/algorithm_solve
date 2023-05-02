import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());
        
        for(int i=0; i<n; i++) {
            String str = br.readLine();   
            
            Stack<Character> lstk = new Stack<>();
            Stack<Character> rstk = new Stack<>();
            StringBuilder sb = new StringBuilder();
            
            // lstk 초기화
            for (int j=0; j<str.length(); j++) {
                char cmd = str.charAt(j);
                switch (cmd) {
                    case '<':
                        if(!lstk.empty()) rstk.push(lstk.pop());
                        break;
                    case '>':
                        if(!rstk.empty()) lstk.push(rstk.pop());
                        break;
                    case '-':
                        if(!lstk.empty()) lstk.pop();
                        break;
                    default: lstk.push(cmd);
                }
            }
            
            while(!lstk.empty()) {
                rstk.push(lstk.pop());
            }
            while(!rstk.empty()) {
                sb.append(rstk.pop());
            }
            System.out.println(sb.toString());
        }
    }
}