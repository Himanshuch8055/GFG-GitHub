/*You are given an integer N. You need to convert all zeroes of N to 5.

Example 1:

Input:
N = 1004
Output: 1554
Explanation: There are two zeroes in 1004
on replacing all zeroes with "5", the new
number will be "1554".
Example 2:

Input:
N = 121
Output: 121
Explanation: Since there are no zeroes in
"121", the number remains as "121".*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends

/*you are required to complete this method*/
int convertFive(int n)
{
    // Your code here
    string ans = "";
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 0)
        {
            ans = "5" + ans;
        }
        else
        {
            ans = to_string(digit) + ans;
        }
        n = n / 10;
    }
    return stoi(ans);
}