class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        int n = nums.length;
        // int c = 0;
        // for(int i=0;i<n;i++){
        //     int sum = 0;
        //     for(int j = i;j<n;j++){
        //         sum += nums[j];
        //         if(sum % k == 0){
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
            int r = ((sum % k) + k) % k;
            if(hm.containsKey(r)){
                c+= hm.get(r); 
            }
            hm.put(r, hm.getOrDefault(r,0)+1);
        }
        
        return c;
        
        
    }
}