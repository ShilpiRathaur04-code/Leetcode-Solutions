class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.length();
        int m= stones.length();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(stones[i] == jewels[j]){
                    count++;

                }
            }
            
        }
        return count;
        
    }
};