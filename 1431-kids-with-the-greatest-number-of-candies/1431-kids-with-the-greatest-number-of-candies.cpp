class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int n= candies.size();
        int maxi =0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,candies[i]);

        }
        for(int i =0;i<n;i++){
            ans.push_back(candies[i]+extraCandies >= maxi);    
        }
        return ans;
       
        
    }
};