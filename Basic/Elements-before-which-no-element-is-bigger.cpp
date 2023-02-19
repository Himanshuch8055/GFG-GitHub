/*You are given an array A of size N. The task is to find count of elements before which all the elements are smaller. First element is always counted as there is no other element before it.



Example 1:

Input :
arr[] =  {10, 40, 23, 35, 50, 7}
Output :
3
Explanation :
The elements are 10, 40 and 50.
No of elements is 3


Example 2:

Input :
arr[] = {5, 4, 1}
Output :
1
Explanation :
There is only one element 5
No of element is 1*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long countElements(long long arr[], long long n)
    {
        // Your code goes here
        int i, j, c = 1;

        for (i = 1; i < n; i++)
        {

            j = i - 1;

            while (j >= 0)
            {

                if (arr[j] >= arr[i])
                {
                    break;
                }

                j--;

            } // while-looop-end

            if (j < 0)
            {
                c++;
            }

        } // i-end

        return c;
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
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.countElements(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends