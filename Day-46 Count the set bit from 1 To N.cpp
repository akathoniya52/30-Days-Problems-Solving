
int countSetBits(int N)
{
    //Write your code here
    int c = 0;
    int m = N;
    int p = 2;
    while(N) {
        N >>= 1;
        int np = m/p;
        c+= np * (p/2);
        int r = m%p;
        r++;
        c+= max(0, r-(p/2));
        p<<= 1;
    }
    return c;
}
