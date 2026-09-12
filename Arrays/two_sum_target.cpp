// 2,7,11,15,18
// target =18
// output=7+11=18

#include <iostream>
using namespace std;
int main() {
  int size;
  cout<<"Enter the size of the array ";
  cin>>size;
  int a[size];
  int target;
  cout<<"Enter the target element ";
  cin>>target;
  cout<<"Enter the elements of the array ";
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      if(a[i]+a[j]==target){
        cout<<"The pair is "<<a[i]<<" and "<<a[j]<<endl;
      }
    }
  }
return 0;
}
    