class Solution {
    public int minMoves(int[] nums) {
        Arrays.sort(nums);
        int n= nums.length;
        int min = nums[0];
        int c = 0;
        for(int i=1;i<n;i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }
        for(int i=0;i<n;i++){
            c += nums[i] - min;
        }
        return c;

        
        
    }
}