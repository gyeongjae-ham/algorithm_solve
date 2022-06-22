// * 3/5 성공 코드

import java.util.*;

public class Main {
    public static String solution(String str) {
        String answer = "";
        for (int i=str.length(); i>0; i--) {
            answer += str.charAt(i-1);
        }
        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String word = "";
        while (sc.hasNextLine()) {
            word = sc.next();
            System.out.println(solution(word));
        }
    }
}