class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder mer = new StringBuilder();
        int i=0,j=0;
        while(i<word1.length()&&j<word2.length()){
            mer.append(word1.charAt(i++));
            mer.append(word2.charAt(j++));
        }
        if(i<word1.length()){
            mer.append(word1.substring(i));
        }
        if(j<word2.length()){
            mer.append(word2.substring(j));
        }
        return mer.toString();
    }
}
