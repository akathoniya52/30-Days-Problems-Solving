class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        int n = s.length();

        for(int i=0; i<n; i++){
            map<char,int> m;
            
            for(int j=i; j<n; j++){
                m[s[j]]++;
                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(auto it:m){
                    maxi = max(maxi,it.second);
                    mini = min(mini, it.second);
                }
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};
