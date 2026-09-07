class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n= nums.size();
        int lt =0;
        int rt = n-1;
        int first = -1;
        int last = -1;
        while(lt<= rt){
            int mid = lt+(rt-lt)/2;
            if(nums[mid]== target){
                first = mid;
                rt = mid -1;
            }
            else if(target < nums[mid]){
                rt = mid - 1;
            }else{
                lt = mid+1;
            }

        }
        lt =0;
        rt = n-1;
        while(lt<= rt){
            int mid = lt+(rt-lt)/2;
             if(nums[mid]== target){
                last = mid;
                lt = mid+1;
            }
            else if(target < nums[mid]){
                rt = mid - 1;
            }else{
                lt = mid+1;
            }

        }
        return {first, last};
    
    }
};