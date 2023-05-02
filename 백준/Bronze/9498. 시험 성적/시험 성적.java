import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        if (n > 89) sb.append("A");
        else if(n > 79) sb.append("B");
        else if(n > 69) sb.append("C");
        else if(n > 59) sb.append("D");
        else sb.append("F");
        
        System.out.println(sb.toString());
    }
}