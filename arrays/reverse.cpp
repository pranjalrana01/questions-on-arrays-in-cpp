#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[7]={1,4,2,6,8,3,5};
    reverse(arr,7);
    printArray(arr,7);
    return 0;
}