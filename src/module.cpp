#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class module {

    int moduleNo;
    string moduleName;
    string duration;
    float moduleFee;
    string startDate;

    public: 
    static vector<module> modulelist;
    module(){}
    module(int moduleNo, string moduleName, string duration, float moduleFee, string startDate)
    {
        this->moduleNo = moduleNo;
        this->moduleName = moduleName;
        this->duration = duration;
        this->moduleFee = moduleFee;
        this->startDate = startDate;

    }
    int getModuleNo(){return this->moduleNo;}
    string getModuleName(){return this -> moduleName;}
    void addModule();
    void updateModule();
    void displayAllModules();

};