#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string.h>

#include"course.h"
#include"teacher.h"
#include<conio.h>


class student : public teacher
{

public:
    student();
    student(string name, string id, string birth, string address,string sphonenumber,string semailaddress,int a1,int b2,int c3,string changeaddress1,string changesemailaddress1)
    {
        this->name=name;
        this->id=id;
        this->birth=birth;
        this->address=address;
        this->sphonenumber=sphonenumber;
        this->semailaddress=semailaddress;
        this->a1=a1;
        this->b2=b2;
        this->c3=c3;
        this->address=changeaddress1;
        this->semailaddress=changesemailaddress1;
        this->sphonenumber=changephonenumber1;



    }
void printdata();

};

#endif

