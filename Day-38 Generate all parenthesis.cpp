class Solution {
    void solve(int n, int open, int close, vector<string>&ans, string curr){
        string temp = curr;
        if(open==close && open==n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            temp +="(";
            solve(n,open+1, close, ans, temp);
            temp.erase(temp.end() - 1); ;
        }
        if(close<open){
            temp+=")";
            solve(n,open,close+1,ans,temp);
            temp.erase(temp.end() - 1); ;
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        int open = 0, close = 0;
        vector<string> ans;
        solve(n,open,close,ans, "");

        return ans;
    }
};
