/*Like people, numbers are also friends with each other. Friendliness between any two numbers a and b is defined as the absolute difference between the two. Lower is this number more friendly the numbers are. Now you are given an array of numbers and you are required to find the friendliness of this array. This can be calculated as the sum of the friendliness of each element in the array with its closest friend in the same array.

Example 1:

Input:
N=3
arr[] = { 4,1,5 }
Output: 5
Explanation: Sum of absolute differences is
            |4-5| + |1-4| + |5-4| = 5
Example 2:

Input:
N=3
arr[] = { 1,1,1 }
Output: 0
Explanation: Sum of absolute differences is
             |1-1| + |1-1| + |1-1| = 0*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int sumOfMinAbsDifferences(int arr[], int n)
    {
        sort(arr, arr + n);

        int sum = 0;
        sum = (arr[1] - arr[0]) + (arr[n - 1] - arr[n - 2]);

        int ads1, ads2;
        for (int i = 1; i < n - 1; i++)
        {
            ads1 = arr[i] - arr[i - 1];
            ads2 = arr[i + 1] - arr[i];
            sum = sum + min(ads1, ads2);
        }
        return sum;
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
        cout << ob.sumOfMinAbsDifferences(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends