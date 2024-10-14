class Solution {
    public int scoreOfString(String s) {
        int score_of_a_string=0;
        for(int i=1;i<s.length();i++){
            score_of_a_string+=Math.abs((int)s.charAt(i)-(int)s.charAt(i-1));
        }
        return score_of_a_string;
    }
}