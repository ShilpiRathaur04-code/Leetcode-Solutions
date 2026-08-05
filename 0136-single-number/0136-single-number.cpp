class Solution {
    public:
    int singleNumber(vector<int>& nums){
//         int ans=0;
//         for(int x : nums){
//              ans=ans^x;
//         }
//         return ans;

          //brute force
          
        //   for(int i=0;i<nums.size();i++){
        //     int count =0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count == 1){
        //         return nums[i];
        //     }
        //   }
        //   return -1;

          //optimize2

          map<long long,int>mp;
          for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
          }
          for(auto i:mp){
            if(i.second == 1){
                return i.first;

            }
          }
          return -1;
           
  
    }
};

