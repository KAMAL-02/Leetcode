//287
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){

        if(nums[i]==nums[i+1]){
            return nums[i];
        }
    }
    return -1;
        //alternate and better solution
    //      while(nums[0]!=nums[nums[0]]){
    //     swap(nums[0],nums[nums[0]]);
    // }
    // return nums[0];
    }
};
