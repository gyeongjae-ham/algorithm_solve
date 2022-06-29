import java.util.*;

class MainString14 {
    public static Integer solution(String str) {
        str = str.toUpperCase().replaceAll("[A-Z]", "");
        int result = Integer.valueOf(str);
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        System.out.print(solution(word));
    }
}