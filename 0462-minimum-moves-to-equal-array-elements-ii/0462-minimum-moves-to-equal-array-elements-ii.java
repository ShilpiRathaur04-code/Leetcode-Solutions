class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int c =0;
        int st = 0;
        int rt = n-1;
        while(st < rt){
            c += nums[rt]-nums[st];
            st++;
            rt--;
        }
        return c;
        
    }
}