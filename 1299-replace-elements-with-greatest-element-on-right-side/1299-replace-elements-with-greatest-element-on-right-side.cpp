class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int MaxRt = -1;
        int curr = arr[n-1];
        for(int i=n-1;i>=0;i--){
            curr =arr[i];
            arr[i]=MaxRt;
            MaxRt = max(MaxRt,curr);
        }
        return arr;
        
        
    }
};