class Solution {
    public int longestConsecutive(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        if(nums.length == 0){
            return 0;
        }
        int count =1;
        int target = 1;
        for(int i=1;i<n;i++){
            if(nums[i]== nums[i-1]){
                continue;
            }else if(nums[i] == nums[i-1]+1){
                count++;
            }else{
                target= Math.max(target,count);
                count=1;
            }  
        }
        return Math.max(target,count);  
        
    }
}