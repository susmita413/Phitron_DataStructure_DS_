#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st ;
        for(string x: logs){
            if(x== "../" ){
                if(!st.empty())  //if STACK IS EMPTY,AND x=../ ,THEN it will be CONTINUE
                    st.pop();
            }
            else if(x == "./"){
                continue;
            }
            else{
                st.push(x);
            }
        }
        return st.size(); // number of operations needed to go back to the main folder 
    }
};