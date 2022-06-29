// * for each 방법

import java.util.Scanner;

class MainString1 {
    public static int solution(String str, char t) {
        int answer=0;
        str = str.toUpperCase();
        t = Character.toUpperCase(t);
        for (char x : str.toCharArray()) {
            if (x==t) answer++;
        }

        return answer;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        char c = sc.next().charAt(0);
        System.out.print(solution(word, c));
    }
}

// * for 방법

class MainString2 {
    public static int solution(String str, char t) {
        int answer=0;
        str = str.toUpperCase();
        t = Character.toUpperCase(t);
        for (int i=0; i<str.length(); i++) {
            if (str.charAt(i)==t) answer++;
        }

        return answer;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        char c = sc.next().charAt(0);
        System.out.print(solution(word, c));
    }
}