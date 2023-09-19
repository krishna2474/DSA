class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0,dig;
        while(n!=0)
        {
            dig=n%10;
            prod*=dig;
            sum+=dig;
            n/=10;
        }
        return prod-sum;
    }
};
