/*Geek is given a task to select at most 10 employees for a company project. Each employee is represented by a single digit ID number which is unique for all the selected employees for the project. Geek has a technical problem in his system which printed ID number multiple times. You are given array a[ ] of N elements having all printed IDs. Help him to get rid of the repeated IDs.

Example 1:

Input:
N = 5
a[ ] = {8, 8, 6, 2, 1}
Output:
8 6 2 1
Example 2:

Input:
N = 6
a[ ] = {7, 6, 7, 4, 2, 7}
Output:
7 6 4 2*/

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueId(int a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans = uniqueId(a, n);
        for (it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

vector<int> uniqueId(int a[], int n)
{
    unordered_map<int, int> m;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {

        m[a[i]]++;

        if (m[a[i]] <= 1)
        {

            nums.push_back(a[i]);
        }
    }

    return nums;
}