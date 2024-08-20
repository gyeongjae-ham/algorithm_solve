import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        
        ArrayList<int[]> checkers = new ArrayList<>();
        int[] arrayX = new int[n];
        int[] arrayY = new int[n];
        
        for(int i=0;i<n;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            
            // 전체 비교해야 하니까 x, y 좌표 구분해서 담아주고
            arrayX[i] = x;
            arrayY[i] = y;
            
            // 이동시켜야 할 점들 담아주기
            checkers.add(new int[]{x, y});
        }
        
        int[] answers = new int[n];
        // 최소 이동 0인 경우가 있어서 실패 뜸
        // 초기값을 MAX_VALUE로 설정
        Arrays.fill(answers, Integer.MAX_VALUE); 
        
        for(int b : arrayY) {
            for (int a : arrayX) {
                ArrayList<Integer> dist = new ArrayList<>();
                
                for (int[] checker : checkers) {
                    dist.add(Math.abs(checker[0] - a) + Math.abs(checker[1] - b));
                }
                
                Collections.sort(dist); // 가까운 거리순으로 정렬
                
                // 각 사람 수마다 최소이동으로 모일 수 있는 이동 수 계산하기
                int tmp = 0;
                for(int i=0;i<dist.size();i++) {
                    tmp += dist.get(i);
                    // 해당 인원 수가 모일 수 있는 최소값 업데이트
                    answers[i] = Math.min(tmp, answers[i]);
                }
            }
        }
        
        for (int answer : answers) {
            bw.write(answer+" ");
        }
        bw.write("\n");
        bw.flush();
        bw.close();
    }
}
