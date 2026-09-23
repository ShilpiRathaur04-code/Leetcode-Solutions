class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int c1=0;
        int c2 =0;
        int maxi = 0;
        for(int i =0;i< n;i++){
            if(nums [i] == 0){
                continue;
            }
            if(nums[i] < 0){
                c1++;
            }else{
                c2++;
            }
            maxi = max(c2, c1);
        }
        return maxi;
        
        
    }
};