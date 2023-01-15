/*Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.

Note: If the number X is not found in the array, return '-1' as an array.

Example 1:

Input:
N = 4 , X = 3
arr[] = { 1, 3, 3, 4 }
Output:
1 2
Explanation:
For the above array, first occurence
of X = 3 is at index = 1 and last
occurence is at index = 2.
Example 2:

Input:
N = 4, X = 5
arr[] = { 1, 2, 3, 4 }
Output:
-1
Explanation:
As 5 is not present in the array,
so the answer is -1.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x)
    {
        vector<int> result;

        if (binary_search(arr.begin(), arr.end(), x))
        {

            int lb = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            int ub = upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;

            result.push_back(lb);
            result.push_back(ub);
        }

        else
        {
            result.push_back(-1);
        }

        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans = obj.firstAndLast(arr, n, x);
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends