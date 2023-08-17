#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class studentRecord {

    int studentId;
    string studentFirstName;
    string studentLastName;
    int age;
    string contactInfo;
    string studentModule ;

    public:

    static vector<studentRecord> studentlist;
    studentRecord(){}
    studentRecord(int id, string fName, string lName, int age, string contactNo, string dept){
    
    this->studentId = id;
    this->studentFirstName = fName;
    this->studentLastName = lName;
    this->age = age;
    this->contactInfo = contactNo;
    this -> studentModule = dept;
    }
    int getId(){ return this-> studentId;}
    void addStudentRecord();
    void updateStudent();
    void displayAllStudentRecord();
};