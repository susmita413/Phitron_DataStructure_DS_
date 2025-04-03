#include<bits/stdc++.h>
using namespace std;

void countWord(string sentence){
    stringstream ss(sentence);
    string word;
    map<string,int> mp;
    
    string mWord;
    int mx= 0;

    while(ss>>word){
        mp[word]++ ;
        if(mx< mp[word]){
            mx= mp[word];
            mWord = word ;
        }
    }
    
    cout<<mWord <<" " <<mx <<endl;
}


int main(){
    int t;
    cin>>t;
    cin.ignore();
    
    for(int i=1; i<=t;i++){
        string sentence;
        getline(cin,sentence);
        if(sentence==""){
            continue;
        }
        countWord(sentence);
    }
    
    return 0 ;
}