//kth min maxx element
#include<bits/stdc++.h>
using namespace std;

void kthminmax(int a[],int n,int k)5
{ 
    sort(a,a+n);
    cout<<"smallest kth element - ";
    cout<<a[k-1]<<endl;
    cout<<"kth largest- ";
    cout<<a[n-k];
}









int main()
{
    int n,i,k;
    cin>>n;
    int a[n];
    cout<<"enter array elements- \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter k value- \n";
    cin>>k;
    kthminmax(a,n,k);


    return 0;

}