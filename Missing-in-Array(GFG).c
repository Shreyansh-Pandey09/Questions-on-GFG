/*
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). 
This array represents a permutation of the integers from 1 to n with one element missing. Your task is to 
identify and return the missing element.
*/

                                        // SOLUION

int missingNum(int *arr, int size) {
    // code here
   long long n = size+1;
   long long total  = n*(n+1)/2;
//   return total;
   long long sum = 0;
   for(int i=0; i<size; i++){
       sum = sum + arr[i];
   }
   return (int)(total - sum);
}

