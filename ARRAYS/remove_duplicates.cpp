#include<iostream>
using namespace std;
int main(){
    int k=0;
    int arr[6]={1,1,2,2,3,4};
    for(int i=1;i<6;i++){
        if(arr[i]!=arr[k-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}