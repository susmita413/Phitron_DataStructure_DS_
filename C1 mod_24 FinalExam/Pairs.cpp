#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int val;
    Student(string name,int val){
        this->name=name;
        this->val= val;
    }
};

class Cmp{
public:
    bool operator()(Student a, Student b){
        if(a.name>b.name) return true;
        else if(a.name==b.name){
            if(a.val<b.val) return true;
            else return false;
        }
        else return false;
    }
};


bool cmp(Student a, Student b){
    if(a.name<b.name) return true;
    else if(a.name==b.name){
        if(a.val>b.val) return true;
        else return false;
    }
    else return false;
}

int main(){
    int n;
    cin>>n;
    vector<Student> v;
    for(int i=0; i<n;i++){
        string a;
        int b;
        cin>> a>>b;
        Student obj(a,b);
        v.push_back(obj);
    }
    sort(v.begin(),v.end(), cmp);

    for(auto x: v){
        cout<< x.name <<" "<<x.val <<endl;
    }
}