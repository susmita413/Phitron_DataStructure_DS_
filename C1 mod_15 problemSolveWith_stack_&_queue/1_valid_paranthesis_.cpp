#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x: s){
            if(x == '(' || x=='{' || x=='[' ){
                st.push(x);
            }
            else{
                if(st.empty()){ // string has EXTRA end bracket
                    return false;
                }
                else if(x==')' && st.top()=='(' ){
                    st.pop();
                }
                else if(x== '}' && st.top()== '{' ){
                    st.pop();
                }
                else if(x== ']' && st.top()== '['){
                    st.pop();
                }
                else { // wrong ORDER or, end and open bracket is not same.
                    return false ;
                }
            }
        }
        return st.empty();  // string has EXTRA open bracket ->string not empty= FALSE
                            // string IS empty= TRUE
    }
};