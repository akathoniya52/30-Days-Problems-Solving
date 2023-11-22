string revWords(string str) {
    // Write your code here.
    istringstream k(str);
	string word;
    
    vector<string>v;
    while(k >> word){
        v.push_back(word);
    }

    string res;
    for(int i = v.size() - 1;i >= 0;i--)
    {
        res += v[i];
        res += " ";
    }
    return res;
}
