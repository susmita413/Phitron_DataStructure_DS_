#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2 ;

        for(char c : s){ // I will put STRING s IN  S1 stack
            if(c== '#'){
                if(!s1.empty()){ // if string is EMPTY, SKIP any '#'
                    s1.pop();    // if string is NOT EMPTY, pop the last character
                }
            }
            else{
                s1.push(c) ;
            }
        }

        for(char c : t){   // I will put STRING t IN  S2 stack
            if(c== '#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }
            else{
                s2.push(c);
            }
        }
        return s1==s2 ;  // if s1 stack== s2 stack , return true
                         // otherwise return false

    }
};