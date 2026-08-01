class Solution {
public:
bool iscow(vector<int>& position,int distance,int m){
    int countball=1,last=position[0];
    for(int i=1;i<position.size();i++){
        if(position[i]-last>=distance){
            last=position[i];
            countball++;
        }
                    if(countball==m) return true;

    }
    return false;
}
     int maxDistance(vector<int>& position, int m) {
        // sort(position.begin(),position.end());
        // int ans=-1;
        // for(int i=0;i<position.back()-position.front();i++){
        //         if(iscow(position,i,m)==true){
        //             ans=i;
        //             continue;
        //     }
        // }
        // return ans;/// tle


    // applying binary search
    sort(position.begin(),position.end());
    int st=1;
    int end=position.back()-position.front();
    while(st<=end){
        int mid=st+(end-st)/2;
        if(iscow(position,mid,m)==true){
            st=mid+1;
        }
        else{end=mid-1;}
    }
    return end;
     }
};