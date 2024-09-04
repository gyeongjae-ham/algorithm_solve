import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int h = Integer.parseInt(st.nextToken());
        int w = Integer.parseInt(st.nextToken());
        
        int[] map = new int[500];
        
        st = new StringTokenizer(br.readLine());
        for(int i=0;i<w;i++) {    
            map[i] = Integer.parseInt(st.nextToken());
        }
        br.close();
        
        long res = 0;
        
        // 처음이랑 맨 끝 기둥은 물이 고일 수 없으니까 범위에서 제외
        for(int i=1; i<w-1; i++) {
            int l = 0;
            int r = 0;
            
            // 현재 위치 기준 양쪽으로 가장 높은 위치 찾기
            for(int j=0; j<i; j++) {
                l = Math.max(l, map[j]);
            }
            
            for(int j=i+1; j<w; j++) {
                r = Math.max(r, map[j]);
            }
            
            if (map[i] > l || map[i] > r) {
                // 지금 위치가 더 크면 여기는 물 안고임
                continue;
            } else {
                res += Math.min(l, r) - map[i];
            }
        }
        
        bw.write(res + "");
        bw.flush();
        bw.close();
    }
    
}
