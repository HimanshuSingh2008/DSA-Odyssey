// reverse of an array
#include<iostream>
using namespace std;
int main()
{
   int size,i,j;
    cout<<"sum of array ";
    cin>>size;
    int a[size],b[size];
    cout<<"Enter the element within the array ";
    for(int i=0;i<size;i++){
    cin>>a[i];
    }
    for(i=(size-1),j=0;i>=0;i--,j++){
      b[j]=a[i];
   }
    cout<<"The reversed array is ";
    for(i=0;i<size;i++)
    cout<<b[i]<<" ";
    return 0;
}