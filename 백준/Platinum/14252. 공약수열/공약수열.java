import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        int[] nums = new int[n];
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        br.close();
        
        for (int i = 0; i < n; i++) {
            nums[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(nums);
        
        int ans = 0;
        int size = nums.length;
        for (int i=0;i<size-1;i++) {
            if (gcd(nums[i], nums[i+1]) != 1) {
                ans += check(nums[i], nums[i+1]);
            }
        }
        
        bw.write(ans + "");
        bw.flush();
        bw.close();
    }
    
    static int gcd(int a, int b) {
        int r = (int)a % b;
        return r == 0 ? b : gcd(b, r);
    }
    
    static int check(int a, int b) {
        for(int i=a+1; i<b; i++) {
            if (gcd(a, i) == 1 && gcd(i, b) == 1) {
                return 1;
            }
        }
        return 2;
    }
}
