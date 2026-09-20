class Solution {
public:
    vector<int> twoSum(vector<int>& numbs, int target) {
        int n = numbs.size();
        vector<int>ans;
        int st = 0;
        int rt = n-1;
        int sum ;

        while(st < rt){
            sum = numbs[st] + numbs[rt]; 
            if(sum == target){
                return {st+1,rt+1};
            }
            if(target < sum){
                rt --;
            }else{
                st ++;
            }  
        }
        return {};

        
    }
};