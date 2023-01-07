/* Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms)

Example 1:

Input:
N = 1
Output: 1
Explanation: For n = 1, sum will be 1.
Example 2:

Input:
N = 5
Output: 15
Explanation: For n = 5, sum will be 1
+ 2 + 3 + 4 + 5 = 15. */

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // function to return sum of  1, 2, ... n
    long long seriesSum(int n)
    {
        // code here
        // int temp = 0;
        // for(int i = 1; i <= n; i++)
        // {
        //     temp += i;
        // }
        // return temp;
        return (long long)n * (n + 1) / 2;
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
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends