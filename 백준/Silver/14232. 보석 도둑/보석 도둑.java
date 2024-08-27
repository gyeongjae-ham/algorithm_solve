import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        long n = Long.parseLong(br.readLine());
        long tg = (long)Math.sqrt(n) + 1;
 
        int ans = 0;
        ArrayList<Long> jews = new ArrayList<>();
        
        for(long i=2;i<tg;i++) {
            while(n%i==0){
                jews.add(i);
                n /= i;
            }
        }
        
        if (n > 1) {
            bw.write(jews.size() + 1 + "\n");
        } else {
            bw.write(jews.size() + "\n");
        }
        
        long size = jews.size();
        for(int i=0;i<size;i++) {
            bw.write(jews.get(i) + " ");
        }
        if (n > 1) {
            bw.write(n + "");
        }
        
        bw.flush();
        bw.close();
    }
}
