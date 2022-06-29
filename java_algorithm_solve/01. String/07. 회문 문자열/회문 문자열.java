// * 팰린드롬 풀기 - 직접 비교

import java.util.*;

class MainString11 {
    public static String solution(String str) {
        String answer = "YES";
        str = str.toUpperCase();
        int len = str.length();
        for (int i=0; i<len; i++) {
            if (str.charAt(i) != str.charAt(len-i-1)) return "NO";
        }
        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        System.out.print(solution(word));
    }
}

// * 팰린드롬 풀기 - StirngBuilder, equalsIgnoreCase(대소문자 구분없이) 사용

class MainString12 {
    public static String solution(String str) {
        String answer = "NO";
        String tmp = new StringBuilder(str).reverse().toString();
        if (str.equalsIgnoreCase(tmp)) answer = "YES";
        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        System.out.print(solution(word));
    }
}