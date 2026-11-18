class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int c = 0;
        for (int i = 0; i < flowerbed.length; i++) {
            if (flowerbed[i] == 0) {
                boolean emptyL = (i == 0) || (flowerbed[i - 1] == 0);
                boolean emptyR = (i == flowerbed.length - 1) || (flowerbed[i + 1] == 0);
                if (emptyL && emptyR) {
                    flowerbed[i] = 1;
                    c++;
                }
            }
        }
        return c >= n; 
    }
}
