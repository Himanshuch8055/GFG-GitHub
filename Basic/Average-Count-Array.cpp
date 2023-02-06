/*You are given an integer 'n' which denote the number of elements in an array a[ ] and an integer 'x'. You have to calculate the average of element a[i] and x and find out if that number exist in array or not. Do it for all the elements of array and store the count result in another array for each index i.

Note: Always take the floor value of the average.

Example 1:

Input : arr[ ] = {2, 4, 8, 6, 2} and X = 2
Output : 2 0 0 1 2
Explanation:
value of n is 5 and that of x is 2.
The array is 2 4 8 6 2. We take x
i.e. 2 and take average with a[0]
whch is equal to 2. We found 2 resides
in array at two positions (1st and 5th
element) thus storing 2 in another
array at 0th index. Similarly do for all
elements and store the count in second
array.

Example 2:

Input : arr[ ] = {9, 5, 2, 4, 0, 3}
        and X = 3
Output :  0 1 1 1 0 1 */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> countArray(int a[], int n, int x)
    {
        // Complete the function
        unordered_map<int, int> mp;
        vector<int> counts(n);
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            counts[i] = mp[(a[i] + x) / 2];
        }
        return counts;
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
        cin >> n;
        cin >> x;
        int a[n + 1];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b;
        Solution obj;
        b = obj.countArray(a, n, x);
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";

        cout << endl;
    }
}

// } Driver Code Ends