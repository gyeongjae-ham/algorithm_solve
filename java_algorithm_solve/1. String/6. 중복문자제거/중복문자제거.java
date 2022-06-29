import java.util.*;

class MainString10 {
    public static String solution(String str) {
        String answer = "";
        for (int i=0; i<str.length(); i++) {
            // ? 문자가 발견된 위치가 지금 인덱스 위치랑 같으면 최초로 발견된 문자고 다르다면 중복된 문자다!!
            if (str.indexOf(str.charAt(i)) == i) answer += str.charAt(i);
        }
        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        System.out.print(solution(word));
        sc.close();
    }
}