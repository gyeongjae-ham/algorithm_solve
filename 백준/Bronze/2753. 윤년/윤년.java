import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        st = new StringTokenizer(br.readLine());
        int yr = Integer.parseInt(st.nextToken());
        
        if(yr % 4==0 && yr % 100 != 0) bw.write("1");
        else if(yr % 400 == 0) bw.write("1");
        else bw.write("0");
        
        bw.flush();
        bw.close();
    }
}