#pragma once
#ifndef Included_COURSE_H
#define Includeed_COURSE_H

#include<conio.h>
#include<iostream>
#include<string>

using namespace std;
class course
{
public:
    course();
    course(int nums1,int nums2,int nums3,int a1,int b2,int c3)
    {
        this->  nums1=nums1  ;
        this->  nums2=nums2  ;
        this->   nums3=nums3 ;
        this->  a1=a1  ;
        this->  b2=b2  ;
        this->   c3=c3 ;
    }
    string courseslistarray[50][100]=  {
                                        {"Object Oriented Programming (OOP)","CSC 104","Mr. Zubair Uddin Shaikh"},
                                        {"Foreign Language Arabic","CSC ","Ms. Maryam Feroz"},
                                        {"Probability & Statistics","MAT100","Mr. Hassan Hashim"},
                                        {"Communication Skills","ENG201","Ms. Samreen Riaz "},
                                        {"Digital Logic & Design","CEN201","Mr. Haque Nawaz Lashari"}};
    string course1,course2,course3,course4;
    string stureg[200]=  { };
    void courseenrolled();
    int a1,b2,c3;
    void getcourseenrolledstu(int,int,int);
    int coursesnumber = 5;
    int *cn=&coursesnumber;
    int nums1,nums2,nums3,nums;
    int *numstu = &nums;
    //string aray is most difficult part
    //string *cp=courseslistarray;
    void courseslist();
    void numberofstudentreg();
    void getcourseteaching();
    void changeofteacher();
    int *selectionst;
    string coursereglist[50][50];
    void coursedeenroll();
    int swito;
    int operator++();
    void printdata();

};


  #endif




