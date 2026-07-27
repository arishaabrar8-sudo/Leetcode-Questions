class Solution {
public:
    long long mySqrt(long long x) {
        // if(x==0) return 0;
        // long long ans=1;
        // for(long long i=1;i<=x;i++){
        //     if(i*i<=x){ans=i;}
        // }
        // return ans; // TLE

        //applying binary search
        if(x==0) return 0;
        long st=1,end=x;
        long  ans=1;

        while(st<=end){
            long long mid=st+(end-st)/2;
            long long k=mid*mid;
            if(k>x){// k is greater to our required ans thats y shrink it
                end=mid-1;
            }
            else{
              ans=mid;

                st=mid+1;
            }
        }
        return ans;
    }
};