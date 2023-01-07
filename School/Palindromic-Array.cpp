/*Given a Integer array A[] of n elements. Your task is to complete the function PalinArray.
Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

Example 1:

Input:
5
111 222 333 444 555

Output:
1

Explanation:
A[0] = 111 //which is a palindrome number.
A[1] = 222 //which is a palindrome number.
A[2] = 333 //which is a palindrome number.
A[3] = 444 //which is a palindrome number.
A[4] = 555 //which is a palindrome number.
As all numbers are palindrome so This will return 1.*/

//{ Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;

// } Driver Code Ends
/*Complete the function below*/

class Solution
{
public:
    int PalinArray(int a[], int n)
    {
        int reversed = 0;
        for (int i = 0; i < n; i++)
        {
            int originalNumber = a[i];
            while (a[i] != 0)
            {
                reversed = reversed * 10 + a[i] % 10;
                a[i] = a[i] / 10;
            }
            if (originalNumber == reversed)
            {
                return 1;
            }
            else
            {
                return 0;
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.PalinArray(a, n) << endl;
    }
}
// } Driver Code Ends

//{ Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;

// } Driver Code Ends
/*Complete the function below*/

class Solution
{
public:
    int PalinArray(int a[], int n)
    {
        //     int reversed = 0;
        // 	for(int i = 0; i < n; i++)
        // 	{
        // 	    int originalNumber = a[i];
        // 	    while(a[i] != 0)
        // 	    {
        // 	        reversed = reversed * 10 + a[i] % 10;
        //             a[i] = a[i] / 10;
        // 	    }
        // 	    if (originalNumber == reversed)
        //         {
        //             return 1;
        //         }
        //         else
        //         {
        //             return 0;
        //         }
        // 	}

        for (int i = 0; i < n; i++)
        {
            int ans = 0;
            int temp = a[i];
            while (temp > 0)
            {
                int r = temp % 10;
                temp /= 10;
                ans = (ans * 10) + r;
            }
            if (ans != a[i])
            {
                return 0;
            }
        }
        return 1;
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.PalinArray(a, n) << endl;
    }
}
// } Driver Code Ends