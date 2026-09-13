class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        if(operations[0] == "--X")  ans =-1;
        else if(operations[0] == "X++")  ans = 1;
        else if(operations[0] == "++X")  ans = 1;
        else if(operations[0] == "X--")  ans = -1;

        for(int i=1;i<operations.size();i++){
            if(operations[i] == "--X") ans = ans-1;
            else if(operations[i] == "X++") ans = ans+1;
            else if(operations[i] == "X--") ans = ans-1;
            else if(operations[i] == "++X") ans = ans+1;
        }
        return ans;
       
       
        
        
        
        
        
    }
};