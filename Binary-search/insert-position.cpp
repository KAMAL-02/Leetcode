class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0 ;
        int r = nums.size()-1 ;
        int ans ;
        if(target>nums[r]){
            return r+1;
        }
        while(l<=r){
            int mid = l + (r-l)/2 ;
            if(nums[mid]>=target) {
                ans = mid ;
                r = mid -1 ;
                }
            else if(nums[mid] < target)l = mid+1 ;
        }
        return ans ;
    }
};
