class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
        sort(nums.begin(),nums.end());
    
        int n= nums.size();

        //bruteforce
        // int count =1;
        // int target = 1;
        // for(int i=1;i<n;i++){
        //     if(nums[i]== nums[i-1]){
        //         continue;
        //     }else if(nums[i] == nums[i-1]+1){
        //         count++;
        //     }else{
        //         target= max(target,count);
        //         count=1;
        //     }  
        // }
        // return max(target,count);  

        //better
        int count =1;
        int lastSmall = INT_MIN;
        int longest =1;
        for(int i=0;i<n;i++){
            if(nums[i]-1 == lastSmall){
                count++;
                lastSmall = nums[i];
            }else if(lastSmall != nums[i]){
                count=1;
                lastSmall=nums[i];
            }
            longest = max(longest,count);
        }
        return longest;

    }
};