bool isGood(int n, int digit, int sum){
    // base case
    if(n == 0){
        return true;
    }
    // Processing
    int last = n % 10;
    if((last > sum) && last != digit){
        sum += last;
        isGood(n / 10, digit, sum);
    }else
        return false;
}
 

vector<int> goodNumbers(int a, int b, int d) {
    // Write your code here.
    vector<int> ans;

    for(int i=a; i<=b; i++){
        if(i % 10 == d) continue;
        if(isGood(i / 10, d, i % 10))
            ans.push_back(i);
    }
    return ans;
}
