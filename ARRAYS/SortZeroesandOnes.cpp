#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,0,0,1};
    int coz=0; //count of zeros
    int coo=0; //count of ones
    for(int i=0;i<5;i++){
        if(arr[i]==0) coz++;
        else coo++;
    }
    for(int i=0;i<5;i++){
        if(i<coz) arr[i]=0;
        else arr[i]=1;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}