#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,1,0,1,0,1,1,0};
    int i=0;
    int j=7;
    while(i<j){
        if(arr[i]==0) i++;
        if(arr[j]==1) j--;
        if(i>j) break;    // important ( to pass all the test cases)
        if(arr[i]==1 && arr[j]==0){
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}