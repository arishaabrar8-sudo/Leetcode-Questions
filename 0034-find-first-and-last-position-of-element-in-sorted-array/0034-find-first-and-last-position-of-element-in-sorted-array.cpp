class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    //     if(nums.empty()) return {-1, -1};

    //    int indexi=-1,indexj=-1;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==target){indexi=i;
    //         break;}
    //     }
    //     for(int j=nums.size()-1;j>=0;j--){
    //         if(nums[j]==target){
    //             indexj=j;
    //             break;
    //         }
    //     }
    //     return {indexi,indexj};
    int first=-1,last=-1;
    int st=0,end=nums.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]>=target){
            if(nums[mid]==target) {first=mid;}
            end=mid-1;
        }
        else{st=mid+1;}
    }
    st=0,end=nums.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]<=target){
            if(nums[mid]==target){last=mid;}
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return {first,last};
    }
};