class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n= nums.size();
        bool i=true;
        bool d= true;
        if(n<=0){
            return false;
        }
        for(int it=0;it<n-1;it++){
            if(nums[it+1]>nums[it]){
                d= false;
            }
            if(nums[it+1]<nums[it]){
               i=false;
            }
        }
        return i || d;
            
        
    
    }
};