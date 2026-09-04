class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     if(nums[i] % 2 ==0){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i] %2 != 0){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // return ans;
        int lt = 0;
        int rt = nums.size()-1;
        while(lt< rt){
            if(nums[lt] % 2 ==0){
                lt++;
            }else if(nums[rt] % 2 != 0){
                rt--;
            }
            if(nums[lt] % 2!= 0 && nums[rt] % 2==0){
                swap(nums[lt], nums[rt]);
                lt++;
                rt--;
            }
        
        }
        return nums;
        
    }
};