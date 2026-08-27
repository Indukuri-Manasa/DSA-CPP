#include<iostream>
using namespace std;
int main(){
    int num1[9]={1,4,5,8,0,0,0,0,0};
    int num2[5]={2,3,6,7,10};
    int n=4;
    int m=5;
    int i=0;
    int j=0;
    while(i<=j){
        if(num2[j]<num1[i]){
            int temp = num2[j];
            num2[j] = num1[i];
            num1[i] = temp;
            
            j++;
        }
        if(num1[i]<num2[j]){
            i++;
        }
        if(i>=j){
            num1[i]=num2[j];
            
        }
    }
    for(int i=0;i<m+n;i++){
        cout<<num1[i]<<" ";
    }

}