/*Given an array of even size N, task is to find minimum value that can be added to an element so that array become balanced. An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.


Example 1:

Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 1
Explanation:
Sum of first 2 elements is 1 + 5  = 6,
Sum of last 2 elements is 3 + 2  = 5,
To make the array balanced you can add 1.

Example 2:

Input:
N = 6
arr[] = { 1, 2, 1, 2, 1, 3 }
Output: 2
Explanation:
Sum of first 3 elements is 1 + 2 + 1 = 4,
Sum of last three elements is 2 + 1 + 3 = 6,
To make the array balanced you can add 2.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int sum1 = 0;
        for (int i = 0; i < n / 2; i++)
        {
            sum1 += a[i];
        }
        int sum2 = 0;
        for (int i = n / 2; i < n; i++)
        {
            sum2 += a[i];
        }
        return abs(sum1 - sum2);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        Solution ob;
        cout << ob.minValueToBalance(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends