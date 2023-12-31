vector<vector<int>> subarraysWithSumK
    (vector<int> a, long long k) {
    // Write your code here
    vector<vector<int>> ans;
    int n = a.size();
    long long int cnt = 0;
    int z =0 ;
    vector<int> temp;

    for(int i=0; i<n; i++){
        cnt+=a[i];
        temp.push_back(a[i]);

        if(cnt>k){
            while(cnt>k){
                cnt-=a[z++];
                temp.erase(temp.begin());
            }
        }
        if(cnt==k){
            ans.push_back(temp);
        }
    }

    return ans;
}
