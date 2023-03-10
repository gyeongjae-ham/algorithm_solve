import java.util.*;
import java.io.*;

public class Main {
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        for(int i=0;i<3;i++) {
            st = new StringTokenizer(br.readLine());
            int[] arr = new int[2];
            
            for(int j=0;j<4;j++) {
                int num = Integer.parseInt(st.nextToken());
                arr[num]++;
            }
            
            switch (arr[0]) {
                case 0:
                    bw.write("E");
                    bw.newLine();
                    break;
                case 1:
                    bw.write("A");
                    bw.newLine();
                    break;
                case 2:
                    bw.write("B");
                    bw.newLine();
                    break;
                case 3:
                    bw.write("C");
                    bw.newLine();
                    break;
                case 4:
                    bw.write("D");
                    bw.newLine();
                    break;
                default:
                    bw.flush();
            }
        }
        
        bw.close();
        br.close();
    }
}