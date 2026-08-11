class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int count=0,ans=0;
        // int i;
        // for(i=0;i<n;i++){
        //     if(count==0){
        //          ans=nums[i];
        //     }
        //     if(ans==nums[i]){
        //         count++;
        //     }
        //     else{
        //         count --;   
        //     }  
        // }
        //  return ans;
        //  return 0;

        //brute force 
        // int n= nums.size();
        // for(int i=0;i<n;i++){
        //     int count =0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]== nums[j]){
        //           count++;
        //         }
        //     }
        //     if(count>n/2){
        //        return nums[i];
        //     }
            
        // }
        //  return -1;

        //  optimaized

        // map<int,int>mp;
        // int n= nums.size();
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
        // for(auto i:mp){
        //     if(i.second > nums.size()/2){
        //         return i.first;
        //     }
        // }
        // return -1;
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int count =1,maxi=1;
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                count ++;
            }else{
                count=1;
            }
            if(count>maxi){
                maxi=count;
                ans = nums[i];
            }
        }
        return ans;

         
    
    
    
    }
};