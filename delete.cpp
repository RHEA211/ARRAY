#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,a[10],pos;
    cout<<"Enter the size of the array-\n";
    cin>>n;

    cout<<"enter the elements of the array \n";
    for(i=0;i<n;i++)
    cin>>a[i]; 
    cout<<"enter the position to be deleted:\n";
    cin>>pos;
    pos--;
    for(i=pos;i<n;i++)
    {
       int temp = a[i]; 
        a[i] = a[i+1];
        a[i+1] = temp;
        
    }
     cout <<"The new array is - \n"; 
     for(i=0;i<n-1;i++)
     {
    cout<<a[i]<<"\n"; 
     }
}