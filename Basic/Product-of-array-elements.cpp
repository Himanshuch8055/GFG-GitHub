/*This is a functional problem. Your task is to return the product of array elements under a given modulo.

The modulo operation finds the remainder after the division of one number by another. For example, K(mod(m))=K%m= remainder obtained when K is divided by m

Example:

Input:

1

4

1 2 3 4

Output:

24*/

//{ Driver Code Starts

//Initial Template for C++

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

// } Driver Code Ends

//User function Template for C++

/*  

     ar[] is the array

     n = number of element in array

     mod = modulo value;

*/

long long int product(int ar[], int n, long long int mod)

 {

     

     //code here

long long int pro = 1 ;

     for(int i=0 ; i<n ; i++){

         pro = (pro*ar[i]) % mod;

     }

     return pro;

     

 }

//{ Driver Code Starts.

int main()

{

 int t;

 cin>>t;

 while(t--)

   {

    int n;

    cin>>n;

    int ar[100001]={0};

    for(int i=0;i<n;i++)

      cin>>ar[i];  

      

    long long int mod=1000000007;

   cout<<product(ar,n,mod)<<endl;

    

 }

return 0;

}

// } Driver Code Ends
