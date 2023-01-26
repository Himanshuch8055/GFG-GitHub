/*Given an array A of size N, construct a Sum Array S(of same size) such that S is equal to the sum of all the elements of A except A[i]. Your task is to complete the function SumArray(A, N) which accepts the array A and N(size of array).

Example 1:

Input:
5
3 6 4 8 9
Output: 27 24 26 22 21
Explanation: For the sum array S, at i=0 we
have 6+4+8+9. At i=1, 3+4+8+9. At i=2, we
have 3+6+8+9. At i=3, we have 3+6+4+9. At
i = 4, we have 3+6+4+8. So S is 27 24 26 22 21.
Example 2:

Input:
6
4 5 7 3 10 1
Output: 26 25 23 27 20 29 */

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void SumArray(int[], int);

// } Driver Code Ends
// User function Template for C++

// arr is the array
// n is the number of element in array
void SumArray(int arr[], int n)
{
    // you code here
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int res = sum - arr[i];
        arr[i] = res;
    }
}

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        SumArray(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends