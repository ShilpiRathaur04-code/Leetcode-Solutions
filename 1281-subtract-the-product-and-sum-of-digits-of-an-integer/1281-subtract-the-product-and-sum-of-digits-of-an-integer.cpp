class Solution {
public:
    int subtractProductAndSum(int n) {
        int original = n;
        int sum = 0;
        int prod = 1;
        while(n != 0){
            int a = n%10;
            sum +=a;
            n =n/10;
        }
        while(original!=0){
            int a= original%10;
            prod*=a;
            original = original/10;
        }
        int result = prod-sum;
        return result;
        
    }
};