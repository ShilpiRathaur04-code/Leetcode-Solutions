class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n= nums.size();
        for(int i=0;i<n ;i++){
            int count = freq[nums[i]]++;
        }
        for( auto x : freq){
            if(x.second == 1 ){
                return x.first;
            }
        }
        return -1;
       
        
    }
};