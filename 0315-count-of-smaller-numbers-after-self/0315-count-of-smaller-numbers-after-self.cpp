class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n= nums.size();

        //brute force
        vector<int> ans(n);
        // int count =0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[j] < nums[i] ){
        //             count++;
        //         }
            
        //     }
        //     ans.push_back(count);
        //     count = 0;
        // }
        // return ans;

        // optimize solution
        vector<int> sort;
        for(int i=n-1; i>=0;i--){
            int pos = lower_bound(sort.begin(),sort.end(), nums[i])-sort.begin();
            ans[i] = pos;
            sort.insert(sort.begin() + pos, nums[i]);

        }
        return ans;
        
        
        
        
    }
};