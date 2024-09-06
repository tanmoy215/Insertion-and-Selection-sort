#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,3,1,4,2};
    for(int i=0;i<n-1;i++){
        int idx = -1;
        int min = INT_MAX;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
            }
        }
        int temp=arr[idx];
        arr[idx]=arr[i];
        arr[i]=temp;
    }
    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}