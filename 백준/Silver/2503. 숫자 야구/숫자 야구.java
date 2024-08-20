import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        int ans = 0;
        
        // 진행된 게임 정보 
        List<int[]> hints = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int number = Integer.parseInt(st.nextToken());
            int strike = Integer.parseInt(st.nextToken());
            int ball = Integer.parseInt(st.nextToken());
            hints.add(new int[]{number, strike, ball});
        }
        
        // 가능한 모든 숫자 조합 탐색
        for (int a = 1; a < 10; a++) {
            for (int b = 1; b < 10; b++) {
                for (int c = 1; c < 10; c++) {
                    if (a == b || a == c || b == c) {
                        continue; // 중복 숫자 체크
                    }
                    
                    int cnt = 0;
                    
                    for (int[] hint : hints) {
                        int number = hint[0];
                        int expectedStrike = hint[1];
                        int expectedBall = hint[2];
                        
                        int checkStrike = 0;
                        int checkBall = 0;
                        
                        // 각 자리 숫자 추출
                        int[] digits = {a, b, c};
                        int[] numberDigits = {number / 100, (number / 10) % 10, number % 10};
                        
                        // 스트라이크 계산
                        for (int i = 0; i < 3; i++) {
                            if (digits[i] == numberDigits[i]) {
                                checkStrike++;
                            }
                        }
                        
                        // 볼 계산
                        for (int i = 0; i < 3; i++) {
                            for (int j = 0; j < 3; j++) {
                                if (i != j && digits[i] == numberDigits[j]) {
                                    checkBall++;
                                }
                            }
                        }
                        
                        // 조건을 만족하는지 체크
                        if (checkStrike == expectedStrike && checkBall == expectedBall) {
                            cnt++;
                        }
                    }
                    
                    // 모든 질문에 대해 유효한 경우
                    if (cnt == n) {
                        ans++;
                    }
                }
            }
        }
        
        // 가능한 답의 총 개수 출력
        bw.write(ans + "\n");
        bw.flush();
        bw.close();
    }
}
