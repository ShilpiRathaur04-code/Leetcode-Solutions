class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        //brute force
        // for(int i=0;i<n;i++){
        //     for(int j= i+1;j<n;j++){
        //         if(nums[i] == nums[j] && abs(i-j)<=k){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        unordered_map<int,int > mp;
        int d =0;
        for(int i =0;i<n;i++){
            if(mp.find(nums[i]) != mp.end()) {
                int prev = mp[nums[i]];
                d = i-prev;
                if(d <= k){
                    return true;
                }
            }  
            mp[nums[i]]=i;
        }
        return false;   
    }
};