/*
Given an array, arr[]. Sort the array using bubble sort algorithm.

Examples :

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: After Sorting the array in ascending order of their values is [1, 3, 4, 7, 9].
Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Explanation: Sort the array in ascending order of their values.
Input: arr[] = [1, 2, 3, 4, 5]
Output: [1, 2, 3, 4, 5]
Explanation: An array that is already sorted should remain unchanged after applying bubble sort.
Constraints:
1 ≤ arr.size() ≤ 103
1 ≤ arr[i] ≤ 103
*/

                                                        // SOLUTION

#include <vector>
using namespace std;
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        int temp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
};