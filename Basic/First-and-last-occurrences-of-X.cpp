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
        // vector<int> result;

        // if (binary_search(arr.begin(), arr.end(), x))
        // {

        //     int lb = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        //     int ub = upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;

        //     result.push_back(lb);
        //     result.push_back(ub);
        // }

        // else
        // {
        //     result.push_back(-1);
        // }

        // return result;

        int mid, start = 0, end = n - 1;
        vector<int> result;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] == x)
            {
                result.push_back(mid);
                end = mid - 1;
            }
            else if (arr[mid] < x)
                start = mid + 1;
            else
                end = mid - 1;
        }
        start = 0;
        end = n - 1;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] == x)
            {
                result.push_back(mid);
                start = mid + 1;
            }
            else if (arr[mid] < x)
                start = mid + 1;
            else
                end = mid - 1;
        }
        if (result.size() == 0)
            return {-1};
        sort(result.begin(), result.end());
        return {result[0], result[result.size() - 1]};
    }
};

//{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n >> x;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         Solution obj;
//         vector<int> ans = obj.firstAndLast(arr, n, x);
//         for (int i : ans)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// } Driver Code Ends

// int mid, start = 0, end = n - 1;
// vector<int> result;
// while (start <= end)
// {
//     mid = (start + end) / 2;
//     if (arr[mid] == x)
//     {
//         result.push_back(mid);
//         end = mid - 1;
//     }
//     else if (arr[mid] < x)
//         start = mid + 1;
//     else
//         end = mid - 1;
// }
// start = 0;
// end = n - 1;
// while (start <= end)
// {
//     mid = (start + end) / 2;
//     if (arr[mid] == x)
//         result.push_back(mid);
//     start = mid + 1;
// }
// else if (arr[mid] < x)
//     start = mid + 1;
// else end = mid - 1;
// }
// if (result.size() == 0)
//     return {-1};
// sort(result.begin(), result.end());
// return {result[0], result[result.size() - 1]};

/*Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5.


Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  6 6 */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n, int x)
{
    // int mid, start = 0, end = n - 1;
    //     vector<int> result;
    //     while (start <= end)
    //     {
    //         mid = (start + end) / 2;
    //         if (arr[mid] == x)
    //         {
    //             result.push_back(mid);
    //             end = mid - 1;
    //         }
    //         else if (arr[mid] < x)
    //             start = mid + 1;
    //         else
    //             end = mid - 1;
    //     }
    //     start = 0;
    //     end = n - 1;
    //     while (start <= end)
    //     {
    //         mid = (start + end) / 2;
    //         if (arr[mid] == x)
    //         {
    //             result.push_back(mid);
    //             start = mid + 1;
    //         }
    //         else if (arr[mid] < x)
    //             start = mid + 1;
    //         else
    //             end = mid - 1;
    //     }
    //     if (result.size() == 0)
    //         return {-1};
    //     sort(result.begin(), result.end());
    //     return {result[0], result[result.size() - 1]};

    vector<int> vec(2, -1);

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            vec[0] = i;
            break;
        }
    }
    if (vec[0] == -1)
    {
        return vec;
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (arr[i] == x)
        {
            vec[1] = i;
            break;
        }
    }
    return vec;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends