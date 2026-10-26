class Solution {
    public int largestAltitude(int[] gain) {
        int n= gain.length;
        int maxi = 0;
        int sh = 0;
        for(int i=0;i<n;i++){
            sh += gain[i];
            maxi = Math.max(maxi,sh);
        }
        return maxi;
        
    }
}