class Solution {
    public boolean checkPrimeFrequency(int[] nums) {
        HashMap<Integer,Integer>mp = new HashMap<>();
        int n = nums.length;
        for(int i =0;i<n;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i], 0) + 1);
        }
        for(int freq : mp.values()){
           if (isPrime(freq)) {
                return true;
            }
        }

        return false;
    }
        public boolean isPrime(int freq){
            if(freq <= 1){
                return false;
            }
            for(int i=2;i<freq;i++){
                if(freq%i==0){
                    return false;
                }
               
            }
             return true;
            
        }   
    
}