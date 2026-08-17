//Dutch flag algorithm
#include<iostream>
using namespace std;
int main(){
    int arr[8]={0,1,2,1,0,2,0,1};
    int coz=0; //count of zeros 
    int coo=0; //count of ones
    //int cot=0; //count of twos
    for(int i=0;i<8;i++){
        if(arr[i]==0) coz++;
        if(arr[i]==1) coo++;
        //if(arr[i]==2) cot++;
    }
    for(int i=0;i<8;i++){
        if(i<coz){
            arr[i]=0;
        }
        else if(i<(coz+coo)){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
}
for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
}
}