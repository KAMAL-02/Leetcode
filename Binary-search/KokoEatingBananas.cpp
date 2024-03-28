//875
class Solution {
public:
    bool isPossible(vector<int> piles,int h,int mid){

        double actualHours = 0;

        for(int i=0;i<piles.size();i++){
            actualHours+=ceil((double)piles[i]/mid);
        }
    //  cout<<actualHours<<" "<<endl;
        if(actualHours>h){
          return false;
        }else{
          return true;
        }

    }
    int minEatingSpeed(vector<int>& piles, int h) {
          int start =1;
          int end = *max_element(piles.begin(), piles.end());
          int mid = start + (end-start)/2;
          int ans = 0;
            while(start<=end){
            //  cout<<mid<<" mid "<<endl;
                if(isPossible(piles,h,mid)){
                  ans = mid;
                  end = mid-1;
                }else{
                  start = mid+1;
                }
mid = start + (end-start)/2;
            }
      return ans;
    }
};
