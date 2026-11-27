class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>s;
        for(int i=0;i<n;i++){
            s.push_back(start+2*i);  
        }
        int XOR=0;
        int m = s.size();
        for(int i=0;i<m;i++){
            XOR = XOR^s[i];

        }
        return XOR;
        
    }
};