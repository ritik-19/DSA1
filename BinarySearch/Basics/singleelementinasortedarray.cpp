class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if((mid&1)==0){
                if(nums[mid]==nums[mid+1]){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
            else{
                  if(nums[mid]!=nums[mid+1]){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
        }
        return nums[low];
    }
};
