#ifndef CLASSROSTER_H
#define CLASSROSTER_H
#include <iostream> 
#include <string> 
#include <vector>
using namespace std; 


class Student {
    public: 
        Student();
        Student(string,string); 
        void setFirstName(string);
        void setLastName(string);
        void setTestScores(int); 
        string getLastName ();
        string getFirstName (); 
        vector <float> getTestScores(); 
    private: 
        string FirstName; 
        string LastName; 
        vector <float> TestScores; 
};

#endif 