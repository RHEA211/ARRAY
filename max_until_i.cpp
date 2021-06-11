#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,max;
    cin>>n;
    int a[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }

     cout<<"max until which index(0 order indexing)"<<endl;
     cin>>j;

    max=a[0];
    for(i=0;i<=j;i++)
    {
         
        if(a[i]>max)
        {
            max=a[i];

        }
    }
    cout<<max;
    
}








