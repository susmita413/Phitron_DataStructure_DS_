#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<string,int> > v;
    v.push_back(make_pair("susmi", 20));
    v.push_back(make_pair("mou", 18));
    v.push_back({"ritu", 25});
    v.push_back({"nira ab", 28});
    v.push_back({"eishita jk", 34});
    
    for(auto x: v){         // search 1 value= O(n)
        if(x.first== "ritu") 
            cout<< x.second <<endl;
    }
                            //search 'N' value= O(n^2)


    map<string,int> mp;
    mp.insert({"susmi", 20}); //O(log N)
    mp.insert({"mou", 18});
    mp.insert({"ritu", 25});
    mp.insert({"nira ab", 28});
    mp.insert({"eishita jk", 34});
    mp.insert({"naila", 15});

    if(mp.count("eishita jk")) //O(log N)
       cout<<"yes. - " <<mp["eishita jk"] <<endl;
    else cout<<"no" <<endl;


    for(auto x: mp){
        cout<<x.first <<" " <<x.second << endl ;
    }
}