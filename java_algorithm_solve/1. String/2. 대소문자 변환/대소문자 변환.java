// * isLowerCase 풀이 방법

import java.util.*;

class MainString3 {
    public static String solution(String str) {

        String answer = "";

        for (char x : str.toCharArray()) {
            if (Character.isLowerCase(x)) answer += Character.toUpperCase(x);
            else answer += Character.toLowerCase(x);
        }

        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        System.out.print(solution(word));
    }
}

// * ASCII 코드 풀이 방법

class MainString4 {
    public static String solution(String str) {

        String answer = "";

        for (char x : str.toCharArray()) {
            if (x>=97 && x<=122) answer += (char)(x-32);
            else answer += (char)(x+32);
        }

        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        System.out.print(solution(word));
    }
}