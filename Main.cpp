#include "Student.h"
#include <iostream> 
#include <iomanip>
#include <vector> 
using namespace std; 

float TestAvgs(vector <float> T, int size){
    float total=0; 
    for (int i=0; i<size; i++){
        total+=T[i];
    }
    return (total/size);
}

float ClassMax(vector <float> m){
    int max=0; 
    for (int i=0; i<m.size(); i++){
        if(m[i]>max)
            max=m[i]; 
    }
    return max; 
}

float ClassMin(vector <float> m){
    int min=101; 
    for (int i = 0; i<m.size(); i++){
        if(m[i]<min)
            min=m[i]; 
    }
    return min; 
}

string LetterGrade (float LG){
    
    if(LG >= 90)
        return "A"; 
    else if(LG >= 80)
        return "B"; 
    else if (LG >=70)
        return "C"; 
    else if (LG >= 60)
        return "D";
    else
        return "F"; 
}

int main(){
    int s;
    int t;
    string Fn;
    string Ln;
    cout<<"Enter tehe number of students : "; 
    cin>>s; 
    cout<<"Enter the number of tests: ";  
    cin>>t;
    while (t < 1 || t > 5){
        cout<<"Invalid test number, re-enter: ";
        cin>>t;
    }
    
    vector <Student> Stu(s); 
    
    cout << "\n\n";
    cout << "Enter Student Names \n";
    cout << "---------------------\n";
    
    for (int i = 0; i < s; i++){
        cout<<"Enter Name of Student "<<i+1<<" : "; 
        cin>>Fn>>Ln;
        Stu[i].setFirstName (Fn);
        Stu[i].setLastName (Ln);
        cout<<"\n"; 
    }
    
    cout<<"\n\n"; 
    
    for (int i =0; i < s; i++){
        cout<<"Enter test scores for "<<Stu[i].getFirstName()<<" "<<Stu[i].getLastName()<<"\n";
        Stu[i].setTestScores(t); 
        cout<<"\n"; 
    }
    
    cout<<"Name"<<setw(20)<<"Average"<<setw(20)<<"Letter Grade"<<"\n"; 
    cout<<"========================================================="<<"\n"; 
    for (int i =0 ; i < s; i++){
        cout<<Stu[i].getFirstName()<<" "<<Stu[i].getLastName()<<setw(15)<<TestAvgs(Stu[i].getTestScores(),t)
        <<setw(15)<<LetterGrade(TestAvgs(Stu[i].getTestScores(),t))<<"\n"; 
    }
    
    cout<<"\n\n"; 
    
    cout<<"Below are the class statitsics : "<<"\n"; 
    cout<<"================================="<<"\n"; 
    for (int i =0 ; i < s; i++){
        cout<<Stu[i].getFirstName()<<" "<<Stu[i].getLastName()<<" " <<"Maximum Test Score : "<<ClassMax(Stu[i].getTestScores())<<"\n"; 
        cout<<"\n"; 
        cout<<Stu[i].getFirstName()<<" "<<Stu[i].getLastName()<<" " <<"Minimum Test Score : "<<ClassMin(Stu[i].getTestScores())<<"\n";
        cout<<"\n"; 
    }
    
}


