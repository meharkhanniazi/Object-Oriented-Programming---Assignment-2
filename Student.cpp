#include<iostream>
#include<string>
#include<conio.h>
#include"teacher.h"
#include"course.h"


#include"Student.h"
using namespace std;

student::student()
  {
      //Constructor of student class
      cout<<endl;

  }



void student::printdata()
{
    getname();
    getid();
    getbirth();
    getphonenumber();
    getaddress();
    getemailaddress();
    getcourseenrolledstu(1,3,5);
}



