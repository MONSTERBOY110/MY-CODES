class Solution {
    public String reverseWords(String s) {
        String[] arr = s.trim().split("\\s+");
        StringBuilder rev = new StringBuilder();
        for (int i = arr.length - 1; i >= 0; i--) {
            rev.append(arr[i]).append(" ");
        }
        return rev.toString().trim();
    }
}   
