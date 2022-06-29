// * StringBuilder 풀이

import java.util.*;

class MainString7 {
    public static ArrayList<String> solution(int n, String[] str) {
        ArrayList<String> answer = new ArrayList<>();

        for (String x : str) {
            String tmp = new StringBuilder(x).reverse().toString();
            answer.add(tmp);
        }

        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] str = new String[n];
        
        for (int i=0; i<n; i++) {
            str[i] = sc.next();
        }

        for (String x : solution(n, str)) {
            System.out.println(x);
        }
    }
}

// * 일일히 뒤집는 방법 풀이

class MainString8 {
    public static ArrayList<String> solution(int n, String[] str) {
        ArrayList<String> answer = new ArrayList<>();

        for (String x : str) {
            char[] s = x.toCharArray();
            int lt = 0, rt = x.length()-1; // ? lt, rt 초기화
            // * 뒤집어 주기
            while (lt<rt) {
                char tmp = s[lt];
                s[lt] = s[rt];
                s[rt] = tmp;
                lt++;
                rt--;
            }

            String tmp = String.valueOf(s);
            answer.add(tmp);
        }

        return answer;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] str = new String[n];
        
        for (int i=0; i<n; i++) {
            str[i] = sc.next();
        }

        for (String x : solution(n, str)) {
            System.out.println(x);
        }
    }
}