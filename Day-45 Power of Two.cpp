bool isPowerOfTwo(int n)
{	
    // Write your code here.
    int countBit = 0;
    while(n!=0){
        int rem = n%2;
        n/=2;
        if(rem==1){
            countBit++;
        }
    }
    return countBit==1?true:false;
}
