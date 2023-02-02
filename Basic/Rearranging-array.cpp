/*Given a list of integers, rearrange the list such that it consists of alternating minimum-maximum elements using only list operations. The first element of the list should be the minimum of all elements and the second element should be a maximum of all elements present in the list. Similarly, the third element will be the next minimum element and the fourth element is the next maximum element, and so on. Use of extra space is not permitted. Store the answer in the answer[] array. You don't need to print that.

Note : All the elements in the array are unique.

Example 1:

Input
5
4 5 1 2 3
Output
1 5 2 4 3
Explanation:
In the first example minimum element is 1,
maximum element is 5, second minimum is
2 and so on, thus the rearranged array is
[1, 5, 2, 4, 3]


Example 2:

Input
4
1 2 3 4
Output
1 4 2 3 */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void Rearrange(int a[], int n, int answer[])
    {
        sort(a, a + n);
        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    answer[i] = a[start];
                    start++;
                }
                else
                {
                    answer[i] = a[end];
                    end--;
                }
            }
        }
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
        int i, a[n + 5], answer[n + 5] = {0};
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        ob.Rearrange(a, n, answer);

        for (i = 0; i < n; i++)
            cout << answer[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends