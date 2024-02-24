//136
//XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
// XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            xorr = xorr^nums[i] ;
        }
        return xorr ;
        
    }
};
