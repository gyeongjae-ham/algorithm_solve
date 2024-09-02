import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        
        int n = Integer.parseInt(br.readLine());
        int[] graph = new int[1001];
        ArrayList<Integer> xList = new ArrayList<>();
        ArrayList<Integer> yList = new ArrayList<>();
        
        for(int i=0;i<n;i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            
            // 해당 x 좌표에 해당하는 높이를 저장해준다
            graph[x] = y;
            // x 좌표들을 담아준다
            xList.add(x);
            // y 좌표들을 담아준다
            yList.add(y);
        }
        
        // x, y 최대값을 담아준다
        int maxX = Collections.max(xList);
        int maxY = Collections.max(yList);
        
        // 원래 prefix 만들때 여유 공간 주고 만들어야 더 편하다
        int[] prefix = new int[maxX + 2];
        int[] suffix = new int[maxX + 2];
        
        ArrayList<Integer> maxPoint = new ArrayList<>();
        
        int h = 0;
        for(int i=1;i<maxX+3;i++) {
            // 최대 높이에 도달하면 maxPoint를 기록해주고 break한다
            if (graph[i] == maxY) {
                maxPoint.add(i);
                break;
            }
            // 이전 높이와 현재 높이 중 높은 높이로 담아주고
            h = Math.max(h, graph[i]);
            // 누적합한다
            prefix[i] = prefix[i-1] + h;
        }
        
        h = 0;
        for(int i=maxX; i>0; i--) {
            if(graph[i] == maxY) {
                maxPoint.add(i);
                break;
            }
            h = Math.max(h, graph[i]);
            suffix[i] = suffix[i+1] + h;
        }
        
        int ans = Arrays.stream(prefix).max().orElseThrow() + Arrays.stream(suffix).max().orElseThrow();
        ans += (maxPoint.get(1) - maxPoint.get(0) + 1) * maxY;
        
        bw.write(ans + "");
        bw.flush();
        bw.close();
    }
}
