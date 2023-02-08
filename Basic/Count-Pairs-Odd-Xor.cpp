/*Given an array arr[] of N integers, the task is to find the number of pairs in the array whose XOR is odd.

Example 1:

Input: N = 3, arr[] = {1, 2, 3}
Output: 2
Explanation: All pairs of array
             1 ^ 2 = 3
             1 ^ 3 = 2
             2 ^ 3 = 1
Example 2:

Input: N = 2, arr[] =  {1, 2}
Output: 1
Explanation: 1^2 =3 which is odd.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    long long countXorPair(long long arr[], int n)
    {
        // Your code goes here
        int countEvens = 0;

        int countOdds = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 2 == 0)

                countEvens++;

            else
            {

                countOdds++;
            }
        }

        return (long)(countEvens * countOdds);
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
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.countXorPair(arr, n);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends