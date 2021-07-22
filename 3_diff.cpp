#include <bits/stdc++.h>
using namespace std;
 

void diff(int arr[], int n)
{   int t1,t2;
   sort(arr, arr+n);
   int diff = INT_MAX;
 
   for (int i=0; i<n-1; i++)
      if (arr[i+1] - arr[i] < diff)
         { diff = arr[i+1] - arr[i];
         t1=arr[i+1];t2=arr[i];
         }
cout << "Minimum difference is " <<diff;
cout<<" that is between "<<t1 <<" and "<<t2;
 
  
  
}
 

int main()
{
   int n,i;
    cin>>n;
    int arr[n];
    cout<<"enter array elements- \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   diff(arr, n);
   
   return 0;
}