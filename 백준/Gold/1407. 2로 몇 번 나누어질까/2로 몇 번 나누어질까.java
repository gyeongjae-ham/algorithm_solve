import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        long a = Long.parseLong(st.nextToken());
        long b = Long.parseLong(st.nextToken());

        System.out.println(howManyTwo(b) - howManyTwo(a-1));
    }

    private static long howManyTwo(long n) {
        long result = 0;
        long divisor = 1;
        long beforeDivisor = 0;

        while(true){
            long val = n / divisor;
            if(val > 0)result += val * (divisor - beforeDivisor);
            else break;
            beforeDivisor = divisor;
            divisor *= 2;
        }


        return result;
    }
}
