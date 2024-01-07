//To find median of two sorted arrays
//Brute approach
//By this approach time limit exceeds
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr ;
        int m = nums1.size() ;
        int n = nums2.size() ;
        int j = 0 , i = 0 ;
        while(i<m && j < n){
            if(nums1[i] < nums2[j]){
               arr.push_back(nums1[i++]); 
            }
            else{
               arr.push_back(nums2[j++]);
            }
        }
        while(i<m){
            arr.push_back(nums1[i++]);
        }
        while(j<n){
            arr.push_back(nums2[j++]);
        }
        int x = ()m + n) ;
        if(x%2 == 1){
            return arr[x/2] ;
        }
        else{
            return (double)((double)(arr[x/2]) + (double)(arr[x/2 - 1]));
        }
        
        

    }
