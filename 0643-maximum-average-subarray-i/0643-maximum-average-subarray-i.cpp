class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        double maxSum =0;
        // double maxi=0;
        double sum;
        for(int i=0;i<=k-1;i++){
            maxSum+=nums[i];   

        }
        sum=maxSum;
        for(int j =k;j<=n-1;j++){
            sum = sum + nums[j] - nums[j-k];
            maxSum = max(maxSum,sum);

        }
        return maxSum/k;
    }
};