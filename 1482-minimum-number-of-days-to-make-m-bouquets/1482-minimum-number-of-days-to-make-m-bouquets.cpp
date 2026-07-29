class Solution {
public:
    bool possible(vector<int>& arr,int mid,int m,int k){
        int count=0,bouquet=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){count++;}
            else{
                bouquet+=count/k;
                count=0;
            }
        }
        bouquet+=count/k;
        if(bouquet>=m) return true;
        else{return false;}
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int st=*min_element(bloomDay.begin(),bloomDay.end()),end=*max_element(bloomDay.begin(),bloomDay.end()),ans=-1;
        if((long long)m*k>bloomDay.size()) return -1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(possible(bloomDay,mid,m,k)==true){
                ans=mid;
                end=mid-1;
            }
            else{ st=mid+1;}
        }
        return ans;
    }
};