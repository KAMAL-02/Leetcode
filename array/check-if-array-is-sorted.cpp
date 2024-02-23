//As we know that for a sorted array the previous of every element is smaller than or equal to its current element.
// So, Through this, we can conclude that if the previous element is smaller than or equal to the current element then. Then we can say that the two elements are sorted. If the condition is true for the entire array then the array is sorted.
// We will check every element with its previous element if the previous element is smaller than or equal to the current element then we will move to the next index.
// If the whole array is traversed successfully or the size of the given array is zero or one (i.e N = 0 or N = 1). Then we will return True else return Fals
class Solution {
public:
    bool check(vector<int>& nums) {
//count to keep track of number of time next element is less than earlier element
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[nums.size()-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
        
};

//return count <= 1;
//this is equivalent to 
// if (count <= 1) {
//     return true;
// } else {
//     return false;
// }
