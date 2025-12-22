/*
Given a sorted array arr[] and an integer k, find the position(0-based indexing) at which k is present in the array using binary search. If k doesn't exist in arr[] return -1. 

Note: If multiple occurrences are there, please return the smallest index
*/

                                                    // SOLUTION
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            if(arr[i] == k) {
                return i;  
            }
        }
        return -1; 
    }
};
