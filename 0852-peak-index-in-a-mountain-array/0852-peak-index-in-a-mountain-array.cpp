class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //bruteforce approach linear search 
        // for(int i=1;i<=arr.size();i++){
        //     if(arr[i-1]<=arr[i] && arr[i]>=arr[i+1]){
        //         return i;
        //     }
        // }
        // return 0;

        //optimal approach binary search 
        int st=0,high=arr.size()-1,ans=0;
        while(st<=high){
            int mid=st+ (high-st)/2;
            if(mid==0){if(arr[mid]>=arr[mid+1])
            {return 0;
           }
           else{st=mid+1;
           continue;}}
            if(mid==arr.size()-1){   
                if(arr[mid]>=arr[mid-1]){return mid;
                }
                else{high=mid-1;
                continue;}

            }
            if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid+1]){return mid;}
            else if(arr[mid-1]<=arr[mid]){
                st=mid+1;
            }
            else{high=mid-1;}
        }
        return ans;
    }
};