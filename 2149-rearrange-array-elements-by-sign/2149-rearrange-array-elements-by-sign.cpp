class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //brutefoce
        int n= nums.size();
        vector<int>arr(n);
        vector<int>pos,neg;
        for(auto i:nums){
            if(i>0){
                pos.push_back(i);
            }else{
                neg.push_back(i);
            }
        }
        int P=0,N=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i] = pos[P++];
            }else{
                arr[i] = neg[N++];
            }
        }
        return arr;
        
        
    }
};