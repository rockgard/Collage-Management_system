#include <iostream>
#include <bits/stdc++.h>
#include "module.cpp"

void module::addModule()
{
     while(true)
    {
        int id;
        cout<<"Enter module Registration ID"<<endl;
        cin>>id;
        int count = 0;
        for(auto x : modulelist)
        {
            if(id == x.moduleNo)
                count++;
        }
        if(count > 0)
            cout<<"invalid id"<<endl;
        else    
        {    
            this->moduleNo = id;
            break;
        }
    }    
    cout<<"Enter Module Name"<<endl;
    cin>>this->moduleName;
    cout<<"Enter Course duration"<<endl;
    cin.ignore();
    getline(cin, this-> duration);
    cout<<"Enter Course Fee"<<endl;
    cin>>this->moduleFee;
    cout<<"Enter the start date"<<endl;
    cin.ignore();
    getline(cin , this->startDate);

}

void module::updateModule()
{
    int id;
    cout<<"Please enter the module Id : ";
    cin>>id;
    int counter = 0;
    for(auto x = module::modulelist.begin(); x != module::modulelist.end(); x++)
    {
        if(x->getModuleNo() == id)
        {
            while(true)
            {
                cout<<"please select a parameter to update"<<endl;
                cout<<"1> Module name"<<endl;
                cout<<"2> Module duration"<<endl;
                cout<<"3> Module Fee"<<endl;
                cout<<"4> Module start Date"<<endl;
                cout<<"0> exit "<<endl;
                int optionSelector; 
                cin >> optionSelector;
                    
                if (optionSelector == 0)
                    break;
                    
                else if (optionSelector == 1)
                {
                    string name; 
                    cin >> name;
                    x->moduleName = name;    
                }
                else if (optionSelector == 2)
                { 
                    string duration;
                    cin.ignore();
                    getline(cin, duration); 
                    x->duration = duration;
                    
                }
                else if(optionSelector == 3)
                {   
                    float fee;
                    cin>>fee;
                    x->moduleFee = fee;
                    
                }
                else if(optionSelector == 4)
                {
                    string date;
                    cin.ignore();
                    getline(cin, date); 
                    x->startDate = date;  
                    
                }
                counter++;
                break;
            }
                        
        }
    }   
     if(counter == 0)
        cout<<"please enter a valid module Id "<<endl;     
}

void module::displayAllModules()
{
    cout<<"MODULE NUMBER" << "      " <<"MODULE NAME" << "       " <<"DURATION"<<"       " << "FEES"<<"        " <<"START DATE"<<"      "<<endl<<endl;
    for(auto x : modulelist)
        cout<<"     "<<x.moduleNo<<"     "<<"       "<<x.moduleName<<"     "<<"     "<< x.duration<<"     "<<"      "<<x.moduleFee<<"     "<<x.startDate<<endl<<endl;   
}
