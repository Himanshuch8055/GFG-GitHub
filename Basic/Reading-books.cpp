/*Geek is at a book fair. There are total N kinds of books. He has to choose a book of a particular kind and read it loudly as many times as he can in the given time and earn points. Geek knows that reading a book of kind i once needs Ai minutes and it will give him Bi points. Geek has K minutes for reading books. During this time, he can only read a book of a particular kind as many times as he can so as to maximize his points. But he can not pick books of different kinds, he has to read the same book again and again. Find the maximum points Geek can get.


Example 1:

Input:
N = 3, K = 10
A = {3, 4, 5}
B = {4, 4, 5}
Output: 12
Explaination:
If Geek picks book of first kind he can
read it 3 times, he will get 3*4 = 12 points.
If Geek picks book of second kind he can
read it 2 times, he will 2*4 = 8 points.
If Geek picks book of third kind he can
read it 2 times, he will get 2*5 = 10 points.
So the maximum possible points which he
can earn in those 10 minutes is 12.*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long maxPoint(int N, int K, long long A[], long long B[])
    {
        // code here
        long long maxPoints = 0;
        long max = 0;
        for (int i = 0; i < N; i++)
        {
            long times = K / A[i];
            long point = B[i];
            if (times * point > max)
                max = times * point;
        }
        return max;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        long long A[N], B[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        Solution ob;
        cout << ob.maxPoint(N, K, A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends