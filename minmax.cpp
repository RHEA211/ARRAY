//finding the max min in an array
#include<bits/stdc++.h>
#include <climits>
using namespace std;

void min_max(int arr[],int n)
{
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(max<arr[i]){
            max= arr[i];
        }
        if(min>arr[i]){
            min= arr[i];
        }
    }
cout<<max<<endl;
cout<<min<<endl;

}
 int main()
{
    int n,arr[10];
    cin>>n;

    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"max and min are-"<<" " <<endl;
    min_max( arr,n);
}