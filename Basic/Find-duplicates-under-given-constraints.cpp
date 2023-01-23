/*Given a sorted array A[] having 10 elements which contain 6 different numbers in which only 1 number is repeated five times. Your task is to find the duplicate number using two comparisons only.

Example 1:

Input:
A[] = {1, 1, 1, 1, 1, 5, 7, 10, 20, 30}
Output: 1
Example 2:

Input:
A[] = {1, 2, 3, 3, 3, 3, 3, 5, 9, 10}
Output: 3*/

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int a[]);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[10];
        for (int i = 0; i < 10; i++)
            cin >> A[i];

        cout << findDuplicate(A) << endl;
    }
}
// } Driver Code Ends

int findDuplicate(int A[])
{
    int i = 1;
    while (i <= 10)
    {
        if (A[i] == A[i + 1])
        {
            return A[i];
            break;
        }
        i++;
    }
}