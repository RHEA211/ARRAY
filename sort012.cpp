#include <iostream>
using namespace std;
 
void sort012(int arr[], int n)
{
    
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
    }
 
    // Putting the 0's in the array in starting.
    for (int i = 0; i < count0; i++)
        arr[i] = 0;
     
    // Putting the 1's in the array after the 0's.
    for (int i = count0; i < (count0 + count1); i++)
        arr[i] = 1;
     
    // Putting the 2's in the array after the 1's
    for (int i = (count0 + count1); i < n; i++)
        arr[i] = 2;
     
    return;
}
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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
    
    sort012(arr, n);
    printArray(arr, n);
    return 0;


  

}
   
