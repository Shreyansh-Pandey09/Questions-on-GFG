/*
Given an array arr[]. Your task is to find the minimum and maximum elements in the array.

Examples:

Input: arr[] = [1, 4, 3, -5, -4, 8, 6]
Output: [-5, 8]
Explanation: minimum and maximum elements of array are -5 and 8.
Input: arr[] = [12, 3, 15, 7, 9]
Output: [3, 15]
Explanation: minimum and maximum element of array are 3 and 15.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 109
*/

                                                        // SOLUTION

#include <vector>
using namespace std;
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        int min=arr[0];
        
        for(int i=1; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return {min,max};
    }
};