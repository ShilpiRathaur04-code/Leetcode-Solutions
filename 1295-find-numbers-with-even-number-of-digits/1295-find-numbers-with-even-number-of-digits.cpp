class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            int digitCount=0;
            int temp = nums[i];
            while(temp != 0){
                digitCount++;
                temp= temp/10;
                
            }
            if(digitCount%2==0){
                ans++;
                
            }
        }
        return ans;  
        
    }
};