#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    queue<int> q;

    int findTheWinner(int n, int k) {
        for(int i=1; i<=n; i++){
            q.push(i);
        }
        int cnt=0;
        while(q.size() >1 ){
            int t= q.front();
            q.pop();
            cnt++ ;
            if(cnt ==k)
                cnt=0;
            else 
                q.push(t);
        }
        return q.front();
    }
};