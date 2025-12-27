@ -0,0 +1,43 @@
/*
Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1.

Note: In case of multiple occurrences of floor of x, return the index of the last occurrence.

Examples

Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
Output: 1
Explanation: Largest number less than or equal to 5 is 2, whose index is 1.
Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 11
Output: 4
Explanation: Largest Number less than or equal to 11 is 10, whose indices are 3 and 4. The index of last occurrence is 4.
Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 0
Output: -1
Explanation: No element less than or equal to 0 is found. So, output is -1.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106
0 ≤ x ≤ arr[n-1]
*/

                                                        // SOLUTION
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        vector<int> arr1 = arr;
        
        reverse(arr1.begin(), arr1.end());
        
        for(int i=0; i<n; i++){
            if(arr1[i]<=x){
                return n-1-i;
            }
        }
        return -1;
    }
};