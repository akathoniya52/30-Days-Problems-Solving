
int getbit(int num,int i){
    int n=1<<(i-1);
    int temp=num&n;
    int first=(temp>>i-1)&1;
    return first;
}
int setbit(int num,int i){
    int n=1<<(i-1);
    int temp=num|n;
    return temp;
}
int clearbit(int num,int i){
    int n=1<<(i-1);
    n=~n;
    int temp=num&n;
    return temp;
}
vector<int> bitManipulation(int num, int i){
    vector<int>ans;
    ans.push_back(getbit(num,i));
    ans.push_back(setbit(num,i));
    ans.push_back(clearbit(num,i));
    return ans;
}
