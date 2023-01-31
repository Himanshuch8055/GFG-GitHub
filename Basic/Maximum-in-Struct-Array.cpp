/*Given a struct array of type Height, having two elements feet and inches. Find the maximum height among n heights, where height is calculated sum of feet and inches after converting feet into inches.

Example 1:

Input:
n = 2
h1 -> 1 2
h2 -> 2 1
Output:
25
Explanation:
(1, 2) and (2, 1) are respective given heights.
After converting both heigths in to inches,
we get 14 and 25 as respective heights.
So, 25 is the maximum height.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height
{
    int feet;
    int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tmp1, tmp2;
        cin >> n;
        Height arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> tmp1 >> tmp2;
            arr[i].feet = tmp1;
            arr[i].inches = tmp2;
        }
        int res = findMax(arr, n);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends

/*
Structure of the element of the array is as
struct Height {
    int feet;
    int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    // Code here
    int m = INT_MIN;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum = 0;

        arr[i].feet *= 12;

        sum += (arr[i].feet + arr[i].inches);

        m = max(m, sum);
    }

    return m;
}