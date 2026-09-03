class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int squares = nums[i]*nums[i];
            ans.push_back(squares);
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};