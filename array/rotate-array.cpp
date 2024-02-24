 void rotate(vector<int>& nums, int k) {
        vector<int>v(nums.size()) ;
        for(int i = 0 ; i < nums.size() ; i++){
          //for example taking 7 as k mean after rotating the array will return to its original value same as 14 then 21 and so on so basically the rotation we have to do would be the mdulo of the array size and the k
            v[(i+k)%nums.size()] = nums[i] ;
        }
        nums = v ;
