/*Given an array A of size n of integers in the range from 1 to n, we need to find the inverse permutation of that array.
Inverse Permutation is a permutation which you will get by inserting position of an element at the position specified by the element value in the array. For better understanding, consider the following example:
Suppose we found element 4 at position 3 in an array, then in reverse permutation, we insert 3 (position of element 4 in the array) in position 4 (element value).


Example 1:

Input:
N = 4
Arr[] = {1, 4, 3, 2}
Output:
1 4 3 2
Explanation:
For element 1 we insert position of 1 from
arr1 i.e 1 at position 1 in arr2. For element
4 in arr1, we insert 2 from arr1 at position
4 in arr2. Similarly, for element 2 in arr1,
we insert position of 2 i.e 4 in arr2.

Example 2:

Input:
N = 5
Arr[] = {2, 3, 4, 5, 1}
Output:
5 1 2 3 4
Explanation:
As index 1 has value 2 so 1 will b
placed at index 2, similarly 2 has
3 so 2 will be placed at index 3
similarly 3 has 4 so placed at 4,
4 has 5 so 4 placed at 5 and 5
has 1 so placed at index 1. */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> inversePermutation(int arr[], int size);

// Driver program to test above function
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
        {
            cin >> arr[i];
        }

        vector<int> ans = inversePermutation(arr, n);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<int> inversePermutation(int arr[], int size)
{
    int pos;
    int element;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        element = arr[i];
        pos = i + 1;
        v[element - 1] = pos;
    }
    return v;
}