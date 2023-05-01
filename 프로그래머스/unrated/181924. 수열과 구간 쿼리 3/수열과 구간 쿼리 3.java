class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        for(int[] v : queries) {
            int tmp = arr[v[0]];
            arr[v[0]] = arr[v[1]];
            arr[v[1]] = tmp;
        }
        
        return arr;
    }
}