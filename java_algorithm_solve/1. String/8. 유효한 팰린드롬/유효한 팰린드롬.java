// * 팰린드롬 - replaceAll, 정규 표현식

import java.util.*;

class MainString13 {
    public static String solution(String str) {
        String answer = "NO";
        str = str.toUpperCase().replaceAll("[^A-Z]", "");
        String tmp = new StringBuilder(str).reverse().toString();
        if (str.equals(tmp)) return "YES";
        
        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        System.out.print(solution(word));
    }
}