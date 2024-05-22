int moveAllNeg(vector<int>&v){
    sort(v.begin(),v.end());

    for(int i = 0 ; i < v.size(); i++){
        if(v[i] != i+1){
            return i+1;
        }
    }
    return -1;
}
