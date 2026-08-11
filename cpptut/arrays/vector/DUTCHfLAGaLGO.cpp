class Solution {
public:
    void sortColors(vector<int>& nums) {
        //dutch flag algo
        int lo=0;
        int mid=0;
        int n= nums.size();
        int hi=n-1;
        while(mid<=hi){
            if(nums[mid]==2){
                swap(nums[mid],nums[hi]);
                hi--;
            }
            if(nums[mid]==0){
                swap(nums[mid],nums[lo]);
                lo++;
                mid++;
            }
            if(nums[mid]==1){
                mid++;
            }
        }
    return ;
    }
};