import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int n = Integer.parseInt(br.readLine());
        Queue<Integer> q = new LinkedList<>();
        
        for(int i=1; i<=n; i++) q.add(i);
        while(q.size() > 1) {
            q.remove();
            q.add(q.remove());
        }
        System.out.println(q.peek());
    }
}