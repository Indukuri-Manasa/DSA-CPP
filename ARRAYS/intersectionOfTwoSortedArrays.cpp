#include<iostream>
using namespace std;
int main(){
    int num1[6]={1,2,2,3,4,5};
    int num2[4]={2,2,4,8};
    int i=0;
    int j=0;
    int k=0;
    while(i<6 && j<4){
        
        if(num1[i]<num2[j]){
            i++;
        }
        else if(num1[i]==num2[j]){
            if(k>0 && num1[i]==num1[k-1]){
            i++;
            j++;
        }
         else{   
            num1[k]=num1[i];
            i++;
            k++;
            j++;
        }
    }
        
        else{
            j++;
        }
    }
    for(int a=0;a<k;a++){
        cout<<num1[a]<<" ";
    }
}