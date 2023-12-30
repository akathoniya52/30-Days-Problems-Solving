string moreSubsequence(int n, int m,
 string a, string b)
{
    // Write your code here
    set<char> s;
    int firstArrayDistinct;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
    firstArrayDistinct = s.size();
    s.clear();
    for(int i=0; i<m; i++){
        s.insert(b[i]);
    }

    if(firstArrayDistinct>s.size()){
        return a;
    }
    if(firstArrayDistinct<s.size()){
        return b;
    }
    return n>=m?a:b;
}
