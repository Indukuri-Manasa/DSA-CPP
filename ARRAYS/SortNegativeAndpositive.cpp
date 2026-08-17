#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,-2,3,-4,-5};
    int i=0;
    int j=4;
    while(i<=j){
        if(arr[i]<0) i++;
        if(arr[j]>0) j--;
        if(i>j) break;
        if(arr[i]>0 && arr[j]<0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } 
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}