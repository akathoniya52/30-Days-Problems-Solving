void solve(vector<string> &res){
    vector<string> temp = res;
    res.clear();

    for(auto x:temp){
        if(x.back()=='0'){
            res.push_back(x+'0');
            res.push_back(x+'1');
        }
        else{
            res.push_back(x+'0');
        }
    }
}

vector<string> generateString(int N) {
    // Write your code here.
    vector<string> res = {"0","1"};

    for(int i=1; i<N; i++){
        solve(res);
    }

    return res;
}
