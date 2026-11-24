class Solution {
    public int compress(char[] chars) {
        int write = 0;
        int i = 0;
        while (i < chars.length) {
            char ch = chars[i];
            int count = 0;
            while (i < chars.length && chars[i] == ch) {
                count++;
                i++;
            }
            chars[write++] = ch;
            if (count > 1) {
                for (char d : String.valueOf(count).toCharArray()) {
                    chars[write++] = d;
                }
            }
        }
        return write;
    }
}   
