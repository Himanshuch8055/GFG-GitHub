/*Pitsy needs help with the given task by her teacher. The task is to divide an array into two sub-array (left and right) containing n/2 elements each and do the sum of the subarrays and then multiply both the subarrays.

Note: If the length of the array is odd then the right half will contain one element more than the left half.

Example 1:

Input : arr[ ] = {1, 2, 3, 4}
Output : 21
Explanation:
Sum up an array from index 0 to 1 = 3
Sum up an array from index 2 to 3 = 7
Their multiplication is 21.

Example 2:

Input : arr[ ] = {1, 2}
Output :  2 */

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);

int main()
{
    // code
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum1 = 0, sum2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << multiply(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int sum1 = 0;

    int sum2 = 0;

    int mul = 1;

    for (int i = 0; i < n / 2; i++)
    {

        sum1 += arr[i];
    }

    for (int i = n - 1; i >= n / 2; i--)
    {

        sum2 += arr[i];
    }

    mul = sum1 * sum2;

    return mul;
}