int secondlargest(vector<int>&a , int n){
  //taking first element as largest element and second largest element as -1
    int Largest = a[0];
    int sLargest = -1 ;

    for(int i = 1 ; i < n  ; i++){
      //if any value in the given array is greater than largest that means it is largest element and earlier largest element is second largest
        if(a[i] > Largest){
            sLargest = Largest ;
            Largest = a[i];
        }
          //there is a chance that there might be a value which is less than largest element but larger than second largest element than that number will become second largest 
        else if(a[i] > sLargest && a[i] != Largest){
            sLargest = a[i];
        }
    }
  //returning second largest element
    return sLargest ;
}
int secondsmallest(vector<int> &a , int n){
    int Smallest = a[0];
    int sSmallest = INT_MAX ;

    for(int i = 1 ; i < n ; i++){
        if(a[i] < Smallest){
            sSmallest = Smallest ;
            Smallest = a[i];
        }
        else if(a[i]!=Smallest && a[i] < sSmallest){
            sSmallest = a[i];
        }
    }
    return sSmallest ;


}

vector<int> getSecondOrderElements(int n, vector<int> a) {

    int sLarge = secondlargest(a, n);
    int sSmall = secondsmallest(a, n);
  //returning second largest and second smallest element in the array in the form of pair
    return {sLarge , sSmall} ;
}
