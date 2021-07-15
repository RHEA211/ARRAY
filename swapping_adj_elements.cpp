#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i;
    int temp;
     
    cout<<"Enter elements in array- \n";
    cin>>n;

    int arr[n];
     

    cout<<"Enter array elements:\n";
    for(i=0;i < n;i++)
    {
        cin>>arr[i];
    }
    //swap adjacent elements


    if (n%2==0)
    {
        for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
     }

     else{
         for(i=0;i <n-1;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }

     }


    cout<<"Array elements after swapping adjacent elements:\n";
    for(i=0;i < n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}