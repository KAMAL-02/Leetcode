//q.no - 268
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n*(n+1)/2 ;
        int actualSums = 0 ;
        for(auto it: nums){
            actualSums+=it ;

        }
        return expectedSum - actualSums ;
    }

};
