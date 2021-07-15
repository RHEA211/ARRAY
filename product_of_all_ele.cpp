#include<bits/stdc++.h>
using namespace std;
//replace array element by the product of all other elements, except that element

int main()
{
    int n,i;
     
    cout<<"Enter elements in array- \n";
    cin>>n;

    int arr[n];
     

    cout<<"Enter array elements:\n";
    for(i=0;i < n;i++)
    {
        cin>>arr[i];
    }

    int prod=1;
    for (int i=0;i<n;i++)
    {
        prod=prod*arr[i];
    }
for (int i=0;i<n;i++)
    {
        arr[i]=prod/arr[i];
    }
    
    

    
    cout<<"Array elements now-:\n";
    for(i=0;i < n;i++)
    {
        cout<<arr[i]<< " ";
    }

    return 0;
}