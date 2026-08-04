class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>arr(nums.size());
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];

        }
        return arr[k-1] ;
        
    }
};