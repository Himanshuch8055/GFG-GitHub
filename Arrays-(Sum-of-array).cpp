/*Given an array of N integers. Your task is to print the sum of all of the integers.


Example 1:

Input:
4
1 2 3 4
Output:
10


Example 2:

Input:
6
5 8 3 10 22 45
Output:
93*/

class Solution
{
public:
    int getSum(int a[], int n)
    {
        // Your code goes here
        // int N;
        // cin>>N;
        // int input;
        // int total = 0;

        // for(int i=0;i<N;i++){
        //     cin>>input;
        //     total = total + input;
        // }
        // return total;
        int tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot = tot + a[i];
        }
        return tot;
    }
};