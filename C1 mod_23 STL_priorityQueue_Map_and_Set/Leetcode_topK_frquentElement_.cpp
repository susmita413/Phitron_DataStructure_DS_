#include<bits/stdc++.h>
using namespace std;

class cmp{
    public:
        bool operator()(pair<int,int> &a, pair<int,int> &b){
            if(a.second< b.second) return true; 
            else return false;
            //jar frequency beshi se upore tahkbe.
            //SO, kom frquency upore tahkle swap krbo
        }
    };
    
    
    class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int,int> frq;
            for(auto s: nums){
                frq[s]= frq[s]+1; //key=nums, value=frequency
            }
            priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
            //take nums to pq,from map, according to priority
    
            for(auto s: frq){
                pq.push({s.first, s.second}); 
            }
    
            vector<int> ans;
            while(k--){
                pair<int,int> s= pq.top();//push 'k' values into final Vector
                pq.pop();
                ans.push_back(s.first);
            }
    
            return ans;
        }
    };