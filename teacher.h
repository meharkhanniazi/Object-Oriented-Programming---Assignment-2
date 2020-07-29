#pragma once
#ifndef Included_TEACHER_H
#define Includeed_TEACHER_H
#include<iostream>
#include<conio.h>
#include<string>
#include"course.h"
#include"person.h"
using namespace std;

class teacher :virtual public person ,virtual public course
{
private:

public:
    teacher();
    teacher(string name ,string id ,string address ,string sphonenumber ,string semailaddress ,string birth,string changesemailaddress1,string changephonenumber1,string course1,string course2,string changeaddress1,string course3,string course4)
    {
        this->name=name;
        this->id=id;
        this->address=address;
        this->sphonenumber=sphonenumber;
        this->semailaddress=semailaddress;
        this->birth=birth;
        this->changesemailaddress1 =semailaddress;
        this->changephonenumber1=sphonenumber;
        this->course1=course1;
        this->course2=course2;
        this->course3=course3;
        this->course4=course4;
        this->address=changeaddress1;


    }
    string changesemailaddress1,changephonenumber1;
    string semailaddress;
    string sphonenumber;
    int generateUniqueInt();
    void getid();

    void setphonenumber();
    void getphonenumber();
    void setemailaddress();
    void getemailaddress();
    void changesemailaddress();
    void changesphonenumber();
    void getaddcourses();
    void addcourse();
    void removecourse();
    void getremovecourses();

    void printdata();
};

#endif

