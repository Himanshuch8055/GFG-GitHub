/*One day Jay, on getting his first salary, decides to distribute apples among the poverty-stricken persons. He gave each person 1kg of apples. People are coming in a queue and he makes sure that he gives every person 1 kg of apples only once. Every person is identified by a specific integer.

Given the length of the queue N followed by an array of N integers, denoting the persons in that queue, find the minimum kilograms of apples Jay will have to distribute.

Example 1:

â€‹Input : arr[ ] = {1, 1, 1, 1, 1}
Output : 1
Explanation:
For test case 1, the same person (identified
by the integer '1' comes again and again in
the queue, but Jay will not give him apples
again and again. He gave him apples only
once so minimum kg's of apples here
required-1kg).

â€‹Example 2:

Input : arr[ ] = {1, 2, 3, 1, 2}
Output :  3 */

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int minimum_apple(int arr[], int n);

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
            cin >> arr[i];

        int ans;
        ans = minimum_apple(arr, n);
        cout << ans << "\n";
    }
}

// } Driver Code Ends

// User function Template for C++

int minimum_apple(int arr[], int n)
{
    // Complete the function
    // int count = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     if(arr[i] != arr[i + 1])
    //     {
    //         count++;
    //     }
    // }
    // return count;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)

    {

        mp[arr[i]]++;
    }

    return mp.size();
}
