#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,3,1,4,2};
 for(int i=1;i<n;i++){
    int j=i;
    // while(j>=1){
    //     if(arr[j]<arr[j-1]){
    //         swap(arr[j],arr[j-1]);
    //     }
    //     j--;
    // }
    while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
 }
 //print the sorted array
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}