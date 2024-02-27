#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>

using namespace std ;

int longestSuccessiveElements(vector<int>&a){
    int n = a.size() ;
    int longest = 1 ;

    unordered_set<int>s ;
    //inserting element from vector into set
    for(int i=0 ; i<n ; i++){
        s.insert(a[i]);
    }
    //checking for starting number
    for(auto it: s){
        if(s.find(it-1) == s.end()){
            int cnt = 1 ;
            int x = it ;

            while(s.find(x+1)!= s.end()){
                x = x+1 ;
                cnt= cnt+1 ;
            }
            longest = max(longest,cnt);

        }
    }
    return longest ;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
//o/p = 4
