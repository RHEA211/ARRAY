#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a[10],n,i,j,temp;
    cout<<"enter the number of elements in the array(1-10)\n";
    cin>>n;
    
    cout<<"enter the elements- \n";
    for (i=0;i<n;i++)
    cin>>a[i];
    cout <<"the elements are-\n";
    for(i=0;i<n;i++)
     cout<<"a["<< i<<"]="<<setw(2)<<a[i]<<"\n";

    cout<<"reversal-"<<"\n";
   
    i=0;
    j=n-1;
    while(i<j){
    
        temp = a[i]; 
        a[i] = a[j];
        a[j] = temp;
         i++;
         j--;}
    cout<<"The reverse array is -"<<"\n";
    for(i=0;i<n;i++)
     cout<<a[i]<<"\n";
 
}