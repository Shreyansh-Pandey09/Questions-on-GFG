/*
Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.

Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

Examples:

Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Since, 1 is present more than 7/2 times, so it is the majority element.
Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than 1/2 times, so it is the majority element.
Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than 2/2 times, so there is no majority element.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
*/

                                                    // SOLUTION
using namespace std;
int majorityElement(int arr[], int n) {
    // code here
    int element = arr[0];
    int c=1;

    for(int i=1; i<n; i++){
        if(arr[i]==element)
            c++;
        else
            c--;
        if(c==0){
            element = arr[i];
            c=1;
        }
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            ans++;
        }
    }
    if(ans>n/2)
        return element;
    else
        return -1;
}
