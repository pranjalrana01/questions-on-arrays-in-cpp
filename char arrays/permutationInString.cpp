#include<iostream>
using namespace std;

bool checkEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
        return 1;
    }
}

 bool checkInclusion(string s1,string s2){
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }
    //traverse s2 string in window size s1 length and compare
    int i=0;
    int windowSize=s1.length();
    int count2[26]={0};

    //running for first window
    while(i<windowSize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1,count2))
        return 1;
    

        //aage window process krdo
        while(i<s2.length()){
            char newchar=s2[i];
            int index=newchar-'a';
            count2[index]++;

            char oldchar=s2[i-windowSize];
            index=oldchar-'a';
            count2[index]--;

            i++;

            if(checkEqual(count1,count2)){
            return 1;
        }
    }
 }

int main(){
    string s1,s2;
    cout<<"input the first string ";
    cin>>s1;

    cout<<"input the second string ";
    cin>>s2;

    cout<<checkInclusion(s1,s2);


    return 0;
}