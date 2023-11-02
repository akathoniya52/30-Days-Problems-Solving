int possible(vector<int>&arr, int n,int mid){
    int cnt = 1;
    int sumCnt = 0;
    for(int i=0; i<n; i++){
        if(sumCnt + arr[i]<=mid){
            sumCnt+=arr[i];
        }
        else{
            cnt++;
            sumCnt = arr[i];
        }

    }
    return  cnt;
}

int largestSubarraySumMinimized(vector<int> arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    if(n<k) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while(low<=high){
        int mid = (low+high)/2;

        int cnt = possible(arr,n,mid);
        if(cnt<=k){
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }
    return low;
}
