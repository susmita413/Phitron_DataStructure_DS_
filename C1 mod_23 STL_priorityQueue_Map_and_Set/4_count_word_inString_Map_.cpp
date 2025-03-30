#include<bits/stdc++.h>
using namespace std;

int main(){
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;

    while(ss>> word){
        mp[word]++ ; // create 'word' KEY & increase it's count
    }
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first <<" "<<it->second <<"times " <<endl;
        //____key_____________value times 
    }
    
    //print a key's VALUE
    cout<<endl<<"valuePrint: " << mp["cricket"] <<endl; 
    return 0 ;
}


/*
cricket football cricket football favourite football cricket chess chess carrom game outdoor cricket f
ootball indoor chess carrom chess

carrom 2times 
chess 4times
cricket 4times
favourite 1times
football 4times
game 1times
indoor 1times
outdoor 1times

*/