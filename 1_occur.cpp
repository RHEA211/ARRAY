//Given an array of integers. All numbers occur twice except one number which occurs once.find the single occurence
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i;
    cin>>n;
    int a[n];
    cout<<"enter array elements- \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
  int result = a[0]; // Start with the first element
  for (int i = 1; i < n; i ++){
    result ^= a[i];
  }
  cout << result << endl;


    return 0;

}


