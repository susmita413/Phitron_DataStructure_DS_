#include<bits/stdc++.h>
using namespace std;
//insertion , update 


int main(){
    map<string,int> mp;
    //1
    mp.insert({"susmita", 20});
    mp.insert({"mou", 18});
    //2
    mp.insert(make_pair("nita abc", 36));
    mp.insert(make_pair("oishi fgh", 17));
    //3
    mp["antu"] = 22;
    mp["zoro xx"]= 40;

    for(auto it: mp){
        cout <<it.first <<" "<<it.second <<endl;
    }

    //update
    //mp.insert({"mou", 28}); //no update
    //mp.insert(make_pair("nita abc", 46)); //no update

    mp["nita abc"]= 46 ; //will be update
    mp["zoro xx"]= 60;
    cout<< endl <<endl; 

    for(auto it: mp){
        cout <<it.first <<" "<<it.second <<endl;
    }

    return 0 ;
}