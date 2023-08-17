#include <iostream>
#include <bits/stdc++.h>
#include "studentRecord.cpp"
#include "module.cpp"

using namespace std;

vector <studentRecord> studentRecord::studentlist;
vector <module> module::modulelist;

int main(){

    //Student Db
    studentRecord s1(101, "adishwar", "chandok", 22 , "8837695273", "java");
    studentRecord::studentlist.push_back(s1);
    studentRecord s2(102, "arpit", "bansal", 21 , "8837695267", "c++");
    studentRecord::studentlist.push_back(s2);
    studentRecord s3(103, "aastik", "nagpal", 22 , "8837695289", "agile");
    studentRecord::studentlist.push_back(s3);
    studentRecord s4(104, "abhey", "singla", 21 , "8837695245", "java");
    studentRecord::studentlist.push_back(s4);
    studentRecord s5(105, "anvesh", "jain", 21 , "8837695212", "c++");
    studentRecord::studentlist.push_back(s5);

    //Module Db
    module m1(111, "java", "2 months", 5000 , "26/10/2023");
    module::modulelist.push_back(m1);
    module m2(112, "c++", "5 months", 3000, "13/09/2023");
    module::modulelist.push_back(m2);
    module m3(113, "agile", "25 days", 2000 , "01/12/2023");
    module::modulelist.push_back(m3);

    while(true)
    {
        string optionChecker;
        cout<<endl<<"# COLLAGE REGISTRATION SYSTEM #"<<endl<<endl;
        cout<<"1> Add Record "<<endl;
        cout<<"2> Update Record"<<endl;
        cout<<"3> Display All Records"<<endl;
        cout<<"4> Add module"<<endl;
        cout<<"5> Update Module"<<endl;
        cout<<"6> Display All Modules"<<endl;
        cout<<"0> Exit.. "<<endl;
        cout<<"enter your choice : ";
        cin >> optionChecker;
        int flag = 0;
        if(optionChecker == "1")
        {           
            studentRecord newStudent;
            newStudent.addStudentRecord();
            studentRecord::studentlist.push_back(newStudent);
            flag++;
        }
        if(optionChecker == "0")
            break;
        if(optionChecker == "2")
        {
            studentRecord updateRecord;
            updateRecord.updateStudent();
            flag++;
        }

        if(optionChecker == "3")
        {
            studentRecord generateRecord;
            generateRecord.displayAllStudentRecord();
            flag++;    
        }
        if(optionChecker == "4")
        {
            module newModule;
            newModule.addModule();
            module::modulelist.push_back(newModule);
            flag++;
        }
        if(optionChecker == "5")
        {
             module updateModule;
             updateModule.updateModule();
             flag++;
        }
        if(optionChecker == "6")
        {   
            module printModule; 
            printModule.displayAllModules();
            flag++;
        }
        if(flag == 0 )
            cout <<endl<<"Invalid Parameter entered "<<endl<<"please Try Again "<<endl<<endl;
    }
    return 0;
}

