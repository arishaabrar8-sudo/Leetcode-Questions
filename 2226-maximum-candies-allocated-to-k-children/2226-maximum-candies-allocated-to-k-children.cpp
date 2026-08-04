class Solution {
public:
bool hello(vector<int>& candies,int mid,long long k){
    long long child=0;
    for(long long c:candies){
        child+=c/mid;
    }
    return child>=k;

}
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum=0;
        for(long long i:candies) sum+=i;
        if(sum<k) return 0;
        int st=1,end=*max_element(candies.begin(),candies.end());
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(hello(candies,mid,k)==true){
                ans=mid;
                st=mid+1;
            }
            else{end=mid-1;}
        }
      return ans;
    }
};