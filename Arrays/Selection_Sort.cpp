#include<iostream>
using namespace std;
int main(){
    int a[] = {64,25,12,22,11};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            int temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}