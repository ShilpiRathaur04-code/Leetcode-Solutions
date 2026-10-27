class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans1;
        vector<int>ans2;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++){
            bool found = false;
           for(int j= 0;j<m;j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
           }
           if(found == false && find(ans1.begin(), ans1.end(), nums1[i]) == ans1.end()){
                ans1.push_back(nums1[i]);

            }  
            
          
        }
        for(int i=0;i<m;i++){
            bool found = false;
           for(int j= 0;j<n;j++){
                if(nums2[i] == nums1[j]){
                    found = true;
                    break;
                    
                }
                   
           }
            if(found == false && find(ans2.begin(), ans2.end(), nums2[i]) == ans2.end()){
                ans2.push_back(nums2[i]);

            }  
            
        }
        return {ans1,ans2};
        
    }
};