// C++ implementation of Radix Sort

#include <iostream>

using namespace std;
// this function return the maximum element from the array where the length >0
int getMax(int arr[], int n){
  if(n<1){
    return -1;
  }
  int max = arr[0];
  for(int i=1; i<n; i++){
    if(max<arr[i]){
      max=arr[i];
    }
  }
  return max;
}
// for printing the array
void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
// count sort
void countSort(int arr[], int n , int exp){
  // define the output array of size N
  int output[n];
  // define the i variable and the count array of size 10
  int i, count[10]={0};
  // iterate over the array for storing the count of the digit
  for(i=0; i<n; i++){
    count[(arr[i]/exp)%10]++;
  }
   // Change count[i] so that count[i]
    // now contains actual position
    // of this digit in output[]
  for(i=1; i<10; i++){
    count[i] +=count[i-1];
  }
  // build the output array
  for(int i=n-1; i>=0; i--){
    output[count[(arr[i]/exp)%10]-1] = arr[i];
    count[(arr[i]/exp)%10]--;
  }
  // Copy the output array to arr[],
    // so that arr[] now contains sorted
    // numbers according to current digit
  for(int i=0; i<n; i++){
    arr[i] = output[i];
  }
  
}

void radixsort(int arr[], int n){
  // get the maximum element from the array
  int m = getMax(arr,n);
  // iterate over the greater elements digits
  for(int exp=1; m/exp>0; exp*=10){
    // call the count Sort Functions
    countSort(arr,n, exp);
  }
  
}

// Driver Code
int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    radixsort(arr, n);
    print(arr, n);
    return 0;
}
