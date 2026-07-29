class Solution {
public:
bool Day(vector<int>& weights,int mid,int days){
int d=1,load=0;
for(int i:weights){
    if(load+i>mid){
        d++;
        load=+i;
    }
    else{load+=i;}
}
    return d<=days;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i:weights){sum+=i;}
        int st=*max_element(weights.begin(),weights.end()),end=sum;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(Day(weights,mid,days)==true){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};