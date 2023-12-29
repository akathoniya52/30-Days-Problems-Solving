void getString(string s,vector<string> &ans,
 string &temp, int sub){
  if (sub == s.size()) {
    ans.push_back(temp);
    return;
  }
    getString(s, ans, temp, sub+1);
    temp.push_back(s[sub]);
    getString(s, ans, temp, sub+1);
    temp.pop_back();
    return;
}

vector<string> generateSubsequences(string s)
{
    // Write your code here.
    vector<string>ans;
    string temp;
    getString(s, ans,temp,0);
    return ans;
}
