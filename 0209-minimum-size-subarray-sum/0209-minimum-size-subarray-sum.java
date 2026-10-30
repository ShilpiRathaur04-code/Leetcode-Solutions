class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n = nums.length;
        int pre[] = new int[n+1];
        for(int i=0;i<n;i++){
            pre[i+1] = pre[i] + nums[i] ;
        }
        int ans = n+1;
        for(int i=0;i<n;i++){
            int l = i+1;
            int r = n;
            while(l <= r){
                int mid = l + (r - l)/2;
                if(pre[mid] - pre[i] >= target){
                    ans= Math.min(ans,mid-i);
                    r = mid-1;
                }else{
                     l = mid+1;
                   
                }
               

            }
        
        }
        return ans == n + 1 ? 0 : ans;



        
    }
}