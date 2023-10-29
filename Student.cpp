#include "Student.h"
#include <iostream> 
#include <vector> 
using namespace std; 

Student::Student(){ 
    FirstName= "" ; 
    LastName= ""; 
}
Student::Student(string fn, string ln){
    FirstName = fn; 
    LastName = ln; 
}
    

void Student::setFirstName(string fn){
    FirstName = fn; 
}

void Student::setLastName(string ln){
    LastName = ln; 
}

void Student :: setTestScores(int n){
    int ts; 
    for (int i =0; i < n; i++){
        cout<<"Test # "<< i+1<<": "; 
        cin>>ts; 
        while (ts < 1 || ts  > 100){
            cout<<"Invalid test score, please re-eneter : "; 
            cin>>ts; 
        }
        TestScores.push_back(ts);
    }
}

string Student::getFirstName(){
    return FirstName; 
}

string Student::getLastName(){
    return LastName; 
}

vector<float> Student :: getTestScores(){
    return TestScores; 
}