class Solution {
public:
    int getSum(int n){
        int sum =0;
        int r;
         while(n>0){
            r = n%10;
            sum+=r*r;
            n/=10;
        }
        return sum;
    }

        bool isHappy(int n) {
           int slow = n;
           int fast = n;
           do{
            slow = getSum(slow);
            fast = getSum(getSum(fast));
           }while(slow != fast);
                return slow == 1;
           
       

        
    }
};