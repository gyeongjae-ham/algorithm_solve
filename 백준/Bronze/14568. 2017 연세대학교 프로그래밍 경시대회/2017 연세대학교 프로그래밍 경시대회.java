import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int candy = Integer.parseInt(br.readLine());
        br.close();
        int answer = 0;
        int n = candy + 1;
        
        for(int i=1;i<n;i++) {
            for(int j=1;j<n;j++) {
                for(int k=1;k<n;k++){
                    if (i+j+k == candy) {
                        if (i >= j+2) {
                            if (k % 2 == 0) {
                                answer++;
                            }
                        }   
                    }
                }
            }
        }
        
        bw.write(answer+"\n");
        bw.flush();
        bw.close();
    }
}