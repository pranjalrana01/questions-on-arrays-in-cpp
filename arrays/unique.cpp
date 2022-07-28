#include<iostream>
using namespace std;

void findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}

int main(){

    int arr[9]={2,4,6,10,10,7,6,4,2};
    findUnique(arr,9);
    
    return 0;
}
