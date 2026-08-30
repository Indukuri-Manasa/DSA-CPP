#include<iostream>
using namespace std;
int main(){
    int i=0;
    int j=1;
    int num1[6]={1,1,2,2,3,4};
    while(j<6){
        if(num1[i]==num1[j]){
            j++;
        }
        if(num1[i]!=num1[j]){
            i++;
            num1[i]=num1[j];
            j++;
        }
    }
    for(int k=0;k<=i;k++){
        cout<<num1[k]<<" ";
    }
}