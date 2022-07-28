#include<iostream>
using namespace std;

char getMaxOccChar(string s){
    int arr[26]={0};

    //creating an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

    //finding maximum character
    int maxi=-1, ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
    }
    char finalAnswer=ans+'a';
    return finalAnswer;
}

int main(){
    
string s;
cout<<"input a string ";
cin>>s;
cout<<"maximum occuring character is "<<getMaxOccChar(s);

    return 0;
}