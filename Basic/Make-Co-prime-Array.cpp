/*Given an array of N elements, find the minimum number of insertions to convert the given array into a co-prime array adjacent pair-wise.

Example 1:

Input: A[] = {2, 7, 28}
Output: 1
Explanation: Here, 1st pair = {2, 7}
are co-primes( gcd(2, 7) = 1). 2nd pair
= {7, 28} are not co-primes, insert 9
between them. gcd(7, 9) = 1 and
gcd(9, 28) = 1.
Example 2:

Input: A[] = {5, 10, 20}
Output : 2
Explanation: Here, there is no pair
which are co-primes. Insert 7 between
(5, 10) and 1 between (10, 20).*/

//{ Driver Code Starts
// CPP program for minimum insertions to
// make a Co-prime Array.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int countCoPrime(int arr[], int n)
    {
        // Complete the function
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (__gcd(arr[i], arr[i + 1]) != 1)
            {
                c++;
            }
        }
        return c++;
    }
};

//{ Driver Code Starts.

// Driver Function
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
        Solution ob;
        cout << ob.countCoPrime(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends