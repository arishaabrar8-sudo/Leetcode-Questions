class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(x==1 || n==0) return 1;
        if(N<0){
            x=1/x;
            N=-N;
        }
        if(x<0){
            if(N%2==0){x=-x;//as neg multiply neg is pos
            }
            else{x=x;}
        }
     double ans=1;
        while(N>0){
            if(N%2==1){
                ans=ans*x;
                N=N-1;
            }
            else{
                x*=x;
                N/=2;
            }
        }
        return ans;
    }
};