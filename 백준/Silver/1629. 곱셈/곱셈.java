import java.io.*;
import java.util.*;

public class Main {   
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        long a = Long.parseLong(st.nextToken());
        long b = Long.parseLong(st.nextToken());
        long c = Long.parseLong(st.nextToken());
        
        long res = recur(a, b, c);
        System.out.println(res);
    }   
    
    private static long recur(long a, long b, long m) {
        // base condition
        // 지수가 1일 때면 a % m return
        if(b == 1) return a % m;
        
        // 2^n * 2^n = 2^2n 원리 이용
        // 따라서 지수를 2로 나누면서 계산한 후에 결과값들을 곱해주면 된다(귀납적)
        long val = recur(a, b/2, m);
        
        // 결과값끼리 곱하고 c로 나눠서 나머지 구하기
        val = val * val % m;
        
        // 지수가 2로 나눠 떨어질 때는 그냥 나머지 결과값 반환
        if(b % 2 == 0) return val;
        
        // 2로 나눠 떨어지지 않으면 홀수인거니까 a를 한번 더 곱해서 나머지 결과 반환
        return val * a % m;
    }
}