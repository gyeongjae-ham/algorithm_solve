import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        
        for (int i=0; i<n; i++) {
            long s = Long.parseLong(br.readLine());
            boolean isPrime = false;
            
            for (int j=3; j<1000001; j++) {
                if (s % j == 0) {
                    bw.write("NO\n");
                    isPrime = true;
                    break;
                }
            }
            
            if (isPrime) {
                continue;    
            } else {
                bw.write("YES\n");
            }
        }
        
        bw.flush();
        bw.close();
    }
}