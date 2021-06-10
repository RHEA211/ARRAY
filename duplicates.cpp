#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[10],n,i,j,count=0;
    cout<<"enter the number of elements to be entered(1-10): ";
    cin>>n;
    cout<<"enter the elements:\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    
    cout<<"the array is: \n";
     for(i=0;i<n;i++)
     cout<<"a["<<i<<"]="<<setw(3)<<a[i] <<"\n";  //setw()=set width 
     
    

      for(int i = 0; i < n; i++) {  
        for(int j = n-1; j >i; j--) {  
            if(a[i] == a[j])
               cout<<"the duplicate element is "<<a[i]<<endl;
               //cout<<"It occurs"<<count <<"number of times";
     
        }
      }
     
     
     return 0;
}
 /*if (a[i]==a[j])
     cout<<"duplicate found";
     count++;
     cout<<"the no. of duplicates is "<<count;*/
     
     
     /*for(int i = 0; i < n; i++) {  
        for(int j = i + 1; j < n; j++) {  
            if(a[i] == a[j])  
               cout<<"the duplicate element is "<<a[i];*/
     
