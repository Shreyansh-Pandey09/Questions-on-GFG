/*
Given a pointer to a variable a, the task is to complete the function updateVar() which will increment the value of the variable by 10. The function does not returns anything.

Examples :

Input: a = 4
Output: 14
Input: a = 61
Output: 71
Constraints:
1 <= a <= 103
*/

                                                            // SOLUTION
using namespace std;                                                       
void updateVar(int *a) {
    // Code here
    *a = *a + 10;
    // cout << *a;
}