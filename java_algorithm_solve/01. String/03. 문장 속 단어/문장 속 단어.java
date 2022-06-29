// * split 풀이

import java.util.*;

class MainString5 {
    public static String solution(String str) {
        String answer = ""; // ? 가장 긴 길이의 단어
        int m = Integer.MIN_VALUE; // ? 가장 작은 수로 초기화

        String[] s = str.split(" "); // ? 띄어쓰기 기준으로 나눠주기

        for (String x : s) {
            int len = x.length();
            if (len > m) {
                m=len;
                answer=x;
            }
        }
        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.print(solution(str));
    }
}

// * indexOf, substring 풀이

class MainString6 {
    public static String solution(String str) {
        String answer = ""; // ? 가장 긴 길이의 단어
        int m = Integer.MIN_VALUE; // ? 가장 작은 수로 초기화
        int pos;
        while ((pos=str.indexOf(' '))!=-1) {
            String tmp = str.substring(0, pos); // * pos(띄어쓰기) 전까지 잘라내기
            int len = tmp.length();
            if (len > m) {
                m=len;
                answer=tmp;
            }
            str = str.substring(pos+1); // * 다시 비교할 str 값을 이전 pos(띄어쓰기) 이후 문자열로 업데이트 해주기
            // * It is time to study => is time to study
        }
        if (str.length() > m) answer = str; // * 마지막 단어 다음에는 띄어쓰기가 없어서 위 로직을 못타니 아래에서 비교해서 넣어주기
        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.print(solution(str));
    }
}