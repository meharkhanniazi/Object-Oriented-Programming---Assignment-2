#pragma once
#ifndef Included_PERSON_H
#define Includeed_PERSON_H
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class person
{
public:
    string name;
    string birth;
    string address;
    string id;
    string changeaddress1;

    person();
    person(string name,string birth ,string address ,string changeaddress1)
    {
        this->name=name;
        this->birth=birth;
        this->address=address;
        this->changeaddress1=address;
    }

    //Getter & Setter for name
    string getname();
    string setname();
    //Getter & Setter for birth
    string getbirth();
    string setbirth();
    //Getter & Setter for Address
    string getaddress();
    string setadress();
    //Change Address
    string changeaddress();
    //Summary
    string printdata();

};
#endif

