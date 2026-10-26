class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxi = 0;
        int Sh = 0;
        for(int i =0;i<n;i++){
            Sh += gain[i];
            maxi = max(maxi,Sh);
        }
        return maxi;
        
    }
};