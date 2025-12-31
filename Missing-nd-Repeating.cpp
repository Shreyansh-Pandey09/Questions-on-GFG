/*
Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

Examples:

Input: arr[] = [2, 2]
Output: [2, 1]
Explanation: Repeating number is 2 and the missing number is 1.
Input: arr[] = [1, 3, 3] 
Output: [3, 2]
Explanation: Repeating number is 3 and the missing number is 2.
Input: arr[] = [4, 3, 6, 2, 1, 1]
Output: [1, 5]
Explanation: Repeating number is 1 and the missing number is 5.
Constraints:
2 ≤ n ≤ 106
1 ≤ arr[i] ≤ n
*/

                                                            // SOLUTION

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr){
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int repeating = -1, missing = -1;
        if(arr[0]!=1){
                missing=1;
        }    
        for(int i = 0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                repeating=arr[i];
            }
            else if(arr[i+1]!=arr[i]+1){
                missing = arr[i]+1;
            }
        }
        if(missing == -1)
            missing = n;

        return {repeating, missing};
    }
};
