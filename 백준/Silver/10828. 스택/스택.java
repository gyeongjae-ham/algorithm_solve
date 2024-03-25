import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(bf.readLine());
        StringBuilder sb = new StringBuilder();
		Stack<Integer> stack = new Stack<Integer>();

		for (int i = 0; i < n; i++) {
			StringTokenizer st = new StringTokenizer(bf.readLine());
			String m = st.nextToken();
            
			if (m.equals("push")) {
				int c = Integer.parseInt(st.nextToken());
				stack.push(c);
			} else if (m.equals("pop")) {
				if (stack.isEmpty()) {
					sb.append("-1\n");
				} else
					sb.append(stack.pop() + "\n");

			} else if (m.equals("size")) {
				sb.append(stack.size() + "\n");
			} else if (m.equals("empty")) {
				if (stack.isEmpty()) {
					sb.append("1\n");
				} else {
					sb.append("0\n");
				}
			} else if (m.equals("top")) {
				if (stack.isEmpty()) {
					sb.append("-1\n");
				} else
					sb.append(stack.peek() + "\n");
			}
		}
        System.out.println(sb);
	}

}