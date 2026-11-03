class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        // int c = 0;
        // for(int i=0;i<n;i++){
        //     int sum = 0;
        //     for(int j =i;j<n;j++){
        //         sum += nums[j];
        //         if(sum == k){
        //             c++;
        //         }
        //     }
        // }
        // return c;
        HashMap<Integer, Integer>hm = new HashMap<>();
        hm.put(0,1);
        int sum = 0;
        int c= 0;
        for(int val : nums){
            sum += val;
            if(hm.containsKey(sum- k)){
                c+= hm.get(sum-k);
            }
            hm.put(sum, hm.getOrDefault(sum,0)+1);
    
        }
        
        return c;
        
    }
}