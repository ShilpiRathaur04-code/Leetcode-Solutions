class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==0){
            return x;
        }
        int st = 0;
        int end = x-1;
        while(st <= end ){
            long long mid = st + (end - st)/2;
            if( mid * mid == x ){
                return mid;
            }
            if(mid*mid > x){
                end = mid -1;
            }else{
                st= mid+1;
            }
        }
        return end;
        

        
    }
};