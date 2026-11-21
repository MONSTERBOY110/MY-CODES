class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] ans = new int[nums.length];
        ans[0] = 1;
        int prod = 1;
        for (int i = 1; i < nums.length; i++) {
            prod*= nums[i-1];
            ans[i]=prod;
        }
        prod=1;
        for (int j = nums.length-2; j >=0; j--) {
            prod*= nums[j+1];
            ans[j]*=prod;
        }
        return ans;
    }
}
