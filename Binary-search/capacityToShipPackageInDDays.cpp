//1103
class Solution {
    int findArrSum(vector<int>& A, int N){
        int sum = 0;
        for(int i=0; i<N; i++){
            sum += A[i];
        }
        return sum;
    }
    int findDays(vector<int>& arr, int capacity){
        int days = 1 ;
        int load = 0 ;
        for(int i = 0 ; i < arr.size();i++){
            if(arr[i]+load > capacity){
                days += 1 ;
                load = arr[i];
            }
            else{
                load += arr[i];
            }
        }
        return days ;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = findArrSum(weights,weights.size());
        while(low<=high){
            int mid = low + (high-low)/2 ;
            int noOfDays = findDays(weights,mid);
            if(noOfDays <= days){
                high = mid - 1 ;
            }
            else{
                low = mid+1 ;
            }
        }
        return low ;
    }
};
