//1
//check for each element whether target - nums[i] is present in hashmap if is present return target - sum and i else put that value inside hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int>res;
        int sum;
        map<int,int>mp;
        //mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum=nums[i];
            if(mp.find(target-sum)!=mp.end()){
                return {mp[target-sum],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
        
    }
};
