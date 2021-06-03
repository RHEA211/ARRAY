#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a [n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"the sorted array ascending  is-"<<endl;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;

      cout<<"the sorted array descending  is-"<<endl;

    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}