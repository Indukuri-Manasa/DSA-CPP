#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    int i=0;
    int j=6;
    bool flag = true;
    while(i<j){
    if(arr[i]==arr[j]){
        //flag = true;.
        i++;
        j--;
    }
    else{
        flag = false;
        break;
    }
}
if(flag==true){
    cout<<"The array is palindrome";
}
else{
    cout<<"The array is not palindrome";
}
}