#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string x: operations){
            if(x== "+"){
                int prev1 = st.top();
                st.pop();
                int prev2 = st.top();
                st.push(prev1);
                st.push(prev1+ prev2);//sum of the previous 2 scores

            }
            else if(x== "D"){
                st.push( st.top()*2 ) ;
            }
            else if(x== "C"){
                st.pop();
            }
            else{
                st.push( stoi(x) ) ; //convert string TO int, AND push
            }
        }

        int ans=0 ;
        while(!st.empty()){
            ans += st.top(); // sum of all the scores 
            st.pop();
        }
        return ans;
    }
};