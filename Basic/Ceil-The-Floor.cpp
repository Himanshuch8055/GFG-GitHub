/*Given an unsorted array Arr[] of N integers and an integer X, find floor and ceiling of X in Arr[0..N-1].

Floor of X is the largest element which is smaller than or equal to X. Floor of X doesn’t exist if X is smaller than smallest element of Arr[].

Ceil of X is the smallest element which is greater than or equal to X. Ceil of X doesn’t exist if X is greater than greatest element of Arr[].

Example 1:

Input:

N = 8, X = 7

Arr[] = {5, 6, 8, 9, 6, 5, 5, 6}

Output: 6 8

Explanation:

Floor of 7 is 6 and ceil of 7 

is 8.

Example 2:

Input:

N = 8, X = 10

Arr[] = {5, 6, 8, 9, 6, 5, 5, 6}

Output: 9 -1

Explanation:

Floor of 10 is 9 but ceil of 10 is not 

possible.*/

//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {

    int t;

    cin >> t;

    while (t--) {

        int n, x;

        cin >> n >> x;

        int arr[n];

        for (int i = 0; i < n; i++) {

            cin >> arr[i];

        }

        auto ans = getFloorAndCeil(arr, n, x);

        cout << ans.first << " " << ans.second << "\n";

    }

    return 0;

}

// } Driver Code Ends

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {

    // code here

int c=-1,f=-1;

    int c1=0;

    for(int i=0;i<n;i++){

        if(arr[i]<x) f=max(f,arr[i]);

        if(arr[i]>x) 

        { if(c1==0){ c=arr[i]; c1++;}

          else c=min(c,arr[i]);

        }

        if(arr[i]==x){

            c=arr[i];

            f=arr[i];

            break;

        }

    }

    pair<int,int>p(f,c);

    return p;

}
