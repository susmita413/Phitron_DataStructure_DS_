#include<bits/stdc++.h>
using namespace std;
//map- insert,count/existence, allvaule print with iterator, 1 value print 

int main(){
    //syntex
    map<string,int> mp; //key-value pair = student-roll

    //insert //1
    mp.insert({"susmita paul", 140}); 
    mp.insert({"paul Mou", 120});
    mp.insert({"arpita paul",114});
    //2
    mp["Nita abc"] = 115;
    mp["Oishi fgh"]= 176;
    mp["rumpa uvx"]= 109;
    mp["paul Mou"]= 104; //update key
    
    //print
    int i=1;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<i <<" " <<it->first <<" "<<it->second <<endl;
        i++;
    }


    //existence //case sensative
    cout<<"existence: "<< mp.count("paul Mou")<<endl; //1
    cout<<"existence: "<< mp.count("oisHi FGH")<<endl; //0

    //1 value print
    cout<<"value Print- "<< mp["paul Mou"]<<endl; //104

    //if value itself is 0
    mp["Giyun"] =0;
    if(mp.count("Giyun")) 
        cout<<"Ache,value= "<<mp["Giyun"]<<endl; //likhbe
    else cout<<"Nai"<<endl;

    return 0 ;
}