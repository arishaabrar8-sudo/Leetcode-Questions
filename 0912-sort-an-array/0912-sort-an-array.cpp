class Solution {
public:
void ms(vector<int> & nums,int low,int mid,int high,vector<int>&temp){
    temp.clear();
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){temp.push_back(nums[left]);
        left++;}
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
        while(left<=mid){temp.push_back(nums[left]);
        left++;}
        while(right<=high){temp.push_back(nums[right]);right++;}
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
}
void mergesort(vector<int>& nums,int low,int high,vector<int>&temp){
    if(low>=high) return;
            int mid=low+(high-low)/2;
            mergesort(nums,low,mid,temp);
            mergesort(nums,mid+1,high,temp);
            
            ms(nums,low,mid,high,temp);

}
    vector<int> sortArray(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        vector<int>temp;
        mergesort(nums,low,high,temp);
        return nums;
        
    }
};