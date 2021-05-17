#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[10],i,n,e,d;
    cout<<"enter the number of elements in the array(1-10)\n";
    cin>>n;
    
    cout<<"enter the elements- \n";
    for (i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element to be inserted \n";
    cin>>e;
    cout<<"enter the index where it has to be inserted:\n";
    cin>>d;
    for(i=n-1;i>=d;i--)
    {
        a[i+1]=a[i];
    }
    a[d]=e;
    n++;

    cout<<"the edited aray is \n";
 for (i=0;i<n;i++){
     cout<<a[i];
 }

}