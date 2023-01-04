/*You are given an array A of size N. You need to print elements of A in alternate order (starting from index 0).

Example 1:

Input:
N = 4
A[] = {1, 2, 3, 4}
Output:
1 3
Example 2:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
1 3 5*/

// User function Template for C++

// ar[] is the array
// n is the number of elements in array.
// void print(int ar[], int n)
// {

//     // int a;
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << ar[i] << " ";
//         }
//         // i=i+1;
//     };
// };

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// ar[] is the array
// n is the number of elements in array.
void print(int ar[], int n)
{

    // int a;
    for (int i = 0; i < n; i = i + 2)
    {
        // if(i%2 == 0){
        cout << ar[i] << " ";
        // }
        // i=i+1;
    };
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ar[100001] = {0};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        print(ar, n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
