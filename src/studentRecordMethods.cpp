#include<iostream>
#include<bits/stdc++.h>
#include"studentRecord.cpp"

using namespace std;

void studentRecord::addStudentRecord()
{
    while(true)
    {
        int id;
        cout<<"Enter student Registration ID"<<endl;
        cin>>id;
        int count = 0;
        for(auto x : studentlist)
        {
            if(id == x.studentId)
                count++;
        }
        if(count > 0)
            cout<<"invalid id"<<endl;
        else    
        {    
            this->studentId = id;
            break;
        }
    }    
    cout<<"Enter student First Name"<<endl;
    cin>>this->studentFirstName;
    cout<<"Enter student Last Name"<<endl;
    cin>>this->studentLastName;
    cout<<"Enter student age"<<endl;
    cin>>this->age;
    cout<<"Enter student Contact Information"<<endl;
    cin>>this->contactInfo;
    cout<<"enter the Department of the student "<<endl;
    cin>>this -> studentModule;
}

void studentRecord::updateStudent(){

    
    int id;
    cout<<"Please enter the student Id of the student : ";
    cin>>id;
    int counter = 0;
    for(auto x = studentRecord::studentlist.begin(); x != studentRecord::studentlist.end(); x++)
    {
        if(x->getId() == id)
        {  
            while(true)
            {   
                cout<<"please select a parameter to update"<<endl;
                cout<<"1> student First name"<<endl;
                cout<<"2> student last name"<<endl;
                cout<<"3> student age"<<endl;
                cout<<"4> student contact Information"<<endl;
                cout<<"0> exit "<<endl;
                int optionSelector; 
                cin >> optionSelector;
                
                if (optionSelector == 0)
                    break;
                
                else if (optionSelector == 1)
                {
                    string fname; 
                    cin >> fname;
                    x->studentFirstName = fname;    
                }
                else if (optionSelector == 2)
                { 
                    string lname;
                    cin >> lname; 
                    x->studentLastName = lname;
                    
                }
                else if(optionSelector == 3)
                {   
                    int age;
                    cin>>age;
                    x->age = age;
                    
                }
                else if(optionSelector == 4)
                {
                    int contact;
                    cin>>contact; 
                    x->contactInfo = contact;  
                    
                }
                else if(optionSelector == 5)
                {
                    string dept;
                    cin>>dept;
                    x->studentModule = dept;
                }
            } 
            counter++;
            break;
        }
        
    }
    if(counter == 0)
        cout<<"please enter a valid Student Id "<<endl;  
}
    
void studentRecord::displayAllStudentRecord(){

    cout<<"STUDENT ID" << "      " <<"STUDENT NAME" << "       " <<"STUDENT AGE"<<"       " << "CONTACT"<<"        " <<"MODULE NAME"<<"      "<<endl<<endl;
    for(auto it : studentlist)
    {
        cout<<" " <<it.studentId << "          " <<it.studentFirstName << " " <<it.studentLastName <<"          " << it.age <<"          " << it.contactInfo<<"          "<<it.studentModule<<endl<<endl;
    }
}