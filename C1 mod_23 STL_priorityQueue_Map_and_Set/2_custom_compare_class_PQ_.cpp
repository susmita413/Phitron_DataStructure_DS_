#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    int mark;
    Student(string name,int roll, int mark){
        this->name= name;
        this->roll= roll;
        this->mark= mark;
    }
};

class cmpr{ //custom compare class
public:
    bool operator()(Student a, Student b){ //parent and child compare
        if(a.mark>b.mark)
            return true;  //swap 
        else if(a.mark< b.mark) 
            return false;//No swap-> smaller mark in parent[top](Student minheap)
        else{ //a.mark== b.mark
            if(a.roll>b.roll) return true; 
            else return false; //no swap-> smaller roll in parent and top
        }
    }
};

int main(){
    priority_queue<Student,vector<Student>,cmpr > pq;
    int n; cin>>n; //Enter student number

    for(int i=0;i<n;i++){ 
        string name; 
        int roll; int mark;
        cin.ignore();
        getline(cin,name);
        cin>>roll>> mark;

        Student objc(name,roll,mark);
        pq.push(objc); //insert in max/min(custom) heap
    }
    while(!pq.empty()){
        cout<<pq.top().name <<" "<<pq.top().roll <<" "<<pq.top().mark <<endl ;
        pq.pop(); //delete in max/min(custom) heap
                  //delete na korle porer priority er Student pabo na
    }

    return 0 ;
}

/*
5
rami jk
104 80
mini kk
125 75
asha mn 
102 95
NILA OP
140 62
SEIJI SR
109 75
-------------------------
NILA OP 140 62
SEIJI SR 109 75
mini kk 125 75
rami jk 104 80
asha mn  102 95


*/