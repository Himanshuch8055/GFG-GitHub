/*Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.



Example 1:

Input:
5 2
10 20 30 40 50
Output:
30


Example 2:

Input:
7 4
10 20 30 40 50 60 70
Output:
50*/

//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int findElementAtIndex(int a[], int n, int key)
    {
        // Your code goes here

        return a[key];
    }
};
class Solution
{
public:
    int findElementAtIndex(int a[], int n, int key)
    {
        // Your code goes here
        return a[key];
    }
};
//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n >> key;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.findElementAtIndex(a, n, key) << endl;
    }

    return 0;
}
// } Driver Code Ends