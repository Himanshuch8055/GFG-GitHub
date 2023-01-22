/*Given an array A[]  of n elements. Your task is to complete the Function num which returns an integer denoting the total number of times digit k appears in the whole array.

For Example:

Input:
A[] = {11,12,13,14,15}, k=1
Output:
6
Explanation: Here digit 1 appears in the whole array 6 times.*/

//{ Driver Code Starts
#include <iostream>
using namespace std;
int num(int a[], int n, int k);
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
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        cout << num(a, n, k) << endl;
    }
}
// } Driver Code Ends

/*Complete the function given below*/
int num(int a[], int n, int k)
{
    //  int count = 0;
    //  for(int i = 0; i < n; i++)
    //  {
    //      int part = a[i];
    //      if(k >= 10)
    //      {
    //          while(part > 0)
    //          {
    //              if(part % 100 == k)
    //              {
    //                  count++;
    //                  part = part / 100;
    //              }
    //          }
    //      }
    //      else
    //      {
    //          while(part > 0)
    //          {
    //              if(part % 10 == k)
    //              {
    //                  count++;
    //                  part = part / 100;
    //              }
    //          }
    //      }
    //  }
    //  return count;

    int count = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {

        while (a[i] > 0)
        {
            ans = a[i] % 10;
            if (ans == k)
                count++;
            a[i] /= 10;
        }
    }
    return count;
}