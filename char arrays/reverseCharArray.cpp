#include<iostream>
using namespace std;
int getLength(char ch[]){
    int count=0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char ch[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
}

bool checkPalindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
     char ch[10];
    cin>>ch;
    cout<<ch;
    int len= getLength(ch);
    cout<<"length "<<len<<endl;
    reverse(ch,len);
    cout<<ch<<endl;
    cout<<"palindrome or not "<<checkPalindrome(ch,len)<<endl;


    
    return 0;
}