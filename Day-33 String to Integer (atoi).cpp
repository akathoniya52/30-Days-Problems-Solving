class Solution {
public:
    int myAtoi(string s) {
       int i=0;
        while(s[i]==' ') i++;//to remove white spaces
            int sign=1;
            if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+') i++;
        //just increase the index and continue as sign is +
        unsigned long long sum=0;
        while(s[i]>='0' && s[i]<='9'){
            sum=sum*10+(s[i++]-48);
            if(sum>INT_MAX) break;
        }

        if(sign==-1 && sum>INT_MAX) return INT_MIN;
        else if(sign==1 && sum>INT_MAX) return INT_MAX;
        else return sum*sign; 
    }
};
