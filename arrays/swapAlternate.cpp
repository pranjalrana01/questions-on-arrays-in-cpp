#include<iostream>
using namespace std;

void swapArray(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int even[8]={2,4,6,8,13,5,7,3};
    swapArray(even,8);
    printArray(even,8);
    return 0;
}