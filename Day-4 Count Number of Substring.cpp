int countSubStrings(string str, int k) 
{
    // Write your code here.
    int n = str.length();
    if(k>n) return 0;
    int res = 0;

    for(int i=0; i<=n-k; i++){

        int dist_char = 0;
        int charCnt[26] = {0};
        int j = i;

        for(int j=i; j<n; j++){

            char ch = str[j];
            if(charCnt[ch-'a']==0){
                dist_char++;
            }

            charCnt[ch-'a']++;

            if(dist_char==k){
                res++;
            }

            if(dist_char>k)
                break;
        }

    }

    return res;
}
