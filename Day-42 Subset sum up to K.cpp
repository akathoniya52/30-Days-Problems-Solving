bool solve(int n, int k, vector<int> &a,
     int sum, int idx){


    if(sum == k) return true;

    if(sum > k || idx >= n) return false;
    // Include
    sum += a[idx];
    if(solve(n, k, a, sum, idx + 1)){
        return true;
    }
    // Exclude
    sum -= a[idx];
    if(solve(n, k, a, sum, idx + 1)){
        return true;
    }
    return false;
}
bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
     return solve(n, k, a, 0, 0);
}
