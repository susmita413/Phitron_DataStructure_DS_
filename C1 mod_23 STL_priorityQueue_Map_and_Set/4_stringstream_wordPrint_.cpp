#include<bits/stdc++.h>
using namespace std;

int main(){
    string sentence;
    getline(cin,sentence);

    string word;
    stringstream ss(sentence);
    while(ss>> word){
        cout<< word <<endl;
    }

    return 0 ;
}

/*
You are what you believe in. You become that which you believe you can become.
*/