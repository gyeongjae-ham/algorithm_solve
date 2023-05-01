class Solution {
    public int solution(int[] num_list) {
        StringBuilder esb = new StringBuilder();
        StringBuilder osb = new StringBuilder();
        
        for(int i: num_list) {
            if(i%2==0) {
                esb.append(i);
            }
            else {
                osb.append(i);
            }
        }
        
        int answer = Integer.parseInt(esb.toString()) + Integer.parseInt(osb.toString());
        return answer;
    }
}