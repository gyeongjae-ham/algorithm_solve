import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        st = new StringTokenizer(br.readLine());
        int sc = Integer.parseInt(st.nextToken());

        if(sc>89) System.out.println("A");
        else if(sc>79) System.out.println("B");
        else if(sc>69) System.out.println("C");
        else if(sc>59) System.out.println("D");
        else System.out.println("F");

        bw.flush();
        bw.close();
    }
}