#include<bits/stdc++.h>
using namespace std;
//input -display array

int main()
{
    int a[10],n,i;
    cout<<"enter the number of elements to be entered(1-10): ";
    cin>>n;
    cout<<"enter the elements:\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    
    cout<<"the values of array are: \n";
     for(i=0;i<n;i++)
     cout<<"a["<<i<<"]="<<setw(3)<<a[i] <<"\n";  //setw()=set width 
     return 0;
}
