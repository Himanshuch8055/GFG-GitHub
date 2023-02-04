/*A guy has to reach his home and does not want to be late. He takes train to reach home. He has a mental illness, so he always switches train at every station.
For eg: If he starts with train A then at station 2 he will switch his train to train B and so on. Similarly, if he starts with train B then he will switch to train A at station 2 and so on. Please help him to find the minimum total time he would take to reach his home.



Example 1:

Input:
N = 3
A[] = {2, 1, 2}
B[] = {3, 2, 1}
Output:
5
Explanation:
If he chose train A initially, then time to
reach home will be : 2 + 2 + 2 = 6
If he Chose train B initially, then time to
reach home will be : 3 + 1 + 1 = 5
5 is minimum hence the answer.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here
        long sum_A = 0, sum_B = 0;

        for (int i = 0; i < n; i += 2)

        {

            sum_A += a[i];

            sum_B += b[i];
        }

        for (int i = 1; i < n; i += 2)

        {

            sum_A += b[i];

            sum_B += a[i];
        }

        return sum_A < sum_B ? sum_A : sum_B;
    }
};

//{ Driver Code Starts.
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        for (long long i = 0; i < n; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}

// } Driver Code Ends