#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int roll;
    int mark;
    Student(string name,int roll,int mark){
        this->name=name;
        this->roll= roll;
        this->mark= mark;
    }
};

class Cmp{
public:
    bool operator()(Student a, Student b){
        if(a.mark<b.mark) return true;
        else if(a.mark==b.mark){
            if(a.roll>b.roll) return true;
            else if(a.roll==b.roll){
                if(a.name>b.name) return true;
                else return false;
            }
            else return false;
        }
        else return false;
    }
};


int main(){
    priority_queue<Student,vector<Student>,Cmp> pq;
    int n; 
    cin>>n ;
    for(int i=0;i<n;i++){
        string name;
        int roll, mark;
        cin>> name>> roll>>mark;
        Student obj(name,roll,mark);
        pq.push(obj);
    }

    int q; cin>>q;
    for(int i=1;i<=q;i++){
        int cmd; 
        cin>>cmd;
        if(cmd==0){
            string name;
            int roll, mark;
            cin>> name>> roll>>mark;
            Student obj(name,roll,mark);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark <<endl ;
        } 
        else if(cmd==1){
            if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark <<endl ;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }    
        else if(cmd==2){
            if(!pq.empty()){
                pq.pop();
                if(pq.empty())
                    cout<<"Empty" <<endl;
                else 
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark <<endl ;
            }
            else{
                cout<<"Empty"<<endl;
            }  
        }
        else{
            continue;
        }
    }
}