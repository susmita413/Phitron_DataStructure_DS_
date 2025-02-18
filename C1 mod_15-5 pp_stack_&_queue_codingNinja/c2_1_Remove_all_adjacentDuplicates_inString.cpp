#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) { //s = "abbaca"
        stack<char> st;
        for(char x : s){ 
            if (!st.empty() && st.top()==x)
                st.pop();
            else
                st.push(x);
        }                          // st STACK= c a(top)
        string ans= "" ;        //EMPTY STRING
        while(!st.empty()){
            ans += st.top();      // ans = "ac"  
            st.pop();
        }
        reverse(ans.begin(), ans.end()); 
        return ans;               // ans = "ca"
    }
};