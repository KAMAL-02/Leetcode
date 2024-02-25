// 3046. Split the Array
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>mp ;
        for(auto it : nums){
            mp[it]++ ;
            if(mp[it] > 2){
                return false ;
            }
        }
        return true ;
        
 
        
    }
};
