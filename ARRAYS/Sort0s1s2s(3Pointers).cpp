//dutch flag algorithm (Three pointer method) 
#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,0,2,0,1,2,1};
    int low=0;
    int mid=0;
    int high=7;
    while(mid<=high){
        if(arr[mid]==0){
            int temp = arr[low];
            arr[low]=arr[mid];
            arr[mid]= temp;
            low++;
            mid++;
                }
        if(mid>high) break;
        if(arr[mid]==2){
            int temp = arr[high];
            arr[high]=arr[mid];
            arr[mid]= temp;
            high--;
        }
        
        if(arr[mid]==1){
            mid++;
        }
        
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}