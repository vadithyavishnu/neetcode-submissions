class Solution {
public:
    void mergesort(vector<int>& nums,int low,int mid,int high){
        int i=low;
        int j=mid+1;
        int k=0;
        vector<int> temp(high - low + 1);
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                temp[k++]=nums[i];
                i++;
            }
            else{
                temp[k++]=nums[j];
                j++;
            }
        }
        while(i<=mid){
            temp[k++]=nums[i++];
        }
        while(j<=high){
            temp[k++]=nums[j++];
        }
       for(int i=0;i<temp.size();i++){
        nums[low+i]=temp[i];
       }
}
    

    void merge(vector<int>& nums,int low,int high){
        int mid=low+(high-low)/2;
        if(low<high){
            merge(nums,low,mid);
            merge(nums,mid+1,high);
            mergesort(nums,low,mid,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        merge(nums,0,nums.size()-1);
        return nums;
    }
};