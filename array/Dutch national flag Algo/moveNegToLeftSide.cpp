#include <iostream> 
#include <vector>
using namespace std;

void moveAllNeg(vector<int>&v){
    int l = 0 ;
    int h = v.size()-1;

    while(l<h){
        if(v[l] < 0){
            l++;
        }
        else if(v[h] > 0){
            h--;
        }
        else{
            swap(v[l],v[h]);
        }
    }
}

int main() {
    vector<int> v1 = {-1,1,2,-1,-3,8,7,-5,-8};

    moveAllNeg(v1);
    for(auto i : v1){
        cout << i << " " ;
    }

    return 0;
}
