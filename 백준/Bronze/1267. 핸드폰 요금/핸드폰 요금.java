import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        
        int M = 0;
        int Y = 0;
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        while(n>0) {
            int t = Integer.parseInt(st.nextToken());
            Y += (t/30+1) * 10;
            M += (t/60+1) * 15;
            n--;
        }
        
        if(M>Y) bw.write("Y "+ String.valueOf(Y));
        else if(M==Y) bw.write("Y M "+String.valueOf(Y));
        else bw.write("M " + String.valueOf(M));
        
        bw.flush();
        bw.close();
        br.close();
    }
}