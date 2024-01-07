//Another approach better than previous one but still not the optimal solution
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() ;
        int n = nums2.size() ;
        int j = 0 , i = 0 ;
        int x = m + n ;
        int index2 = x/2 ;
        int index1 = index2 - 1 ;
        int count = 0 ; 
        int index1el = -1 , index2el = -1 ;
        while(i<m && j < n){
            if(nums1[i] < nums2[j]){
                if(count == index1) index1el = nums1[i];
                if(count == index2) index2el = nums1[i];
                count++;
                i++;
            }
            else{
                if(count == index1) index1el = nums2[i];
                if(count == index2) index2el = nums2[i];
                count++;
                i++;
            }
        }
        while(i<m){
            if(count == index1) index1el = nums1[i];
            if(count == index2) index2el = nums1[i];
            count++;
            i++;
        }
        while(j<n){
            if(count == index1) index1el = nums2[i];
            if(count == index2) index2el = nums2[i];
            count++;
            i++;
        }
        if(x%2 == 1){
            return index2el ;
        }
        else{
            return (double)((double)(index1el + index2el))/2;
        }
        
        

    }
