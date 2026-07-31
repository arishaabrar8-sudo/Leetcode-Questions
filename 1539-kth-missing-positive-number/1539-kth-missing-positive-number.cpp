class Solution {
public:
     int findKthPositive(vector<int>& arr, int k) {
//         vector<int>hello;
//         int count=0;
//         for(int i=1;i<=10000;i++){
//              hello.push_back(i);
          
//         }
// for(int i = 0; i < arr.size(); i++){
//               hello.erase(remove(hello.begin(),hello.end(),arr[i]),hello.end());
//         }
//         return hello[k-1];

// using binary search
int st=0,end=arr.size()-1;
while(st<=end){
    int mid=st+(end-st)/2;
    if(arr[mid]-(mid+1)<k){
        st=mid+1;
    }
    else{end=mid-1;}
}
return st+k;
    }
};