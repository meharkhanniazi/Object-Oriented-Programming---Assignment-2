#include<iostream>
#include<string>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

#include"person.h"
#include"teacher.h"
#include"course.h"
#include"Student.h"

using namespace std;

void mainloop();
void personoption();
void teacheroption();
void studentoption();
void courseoption();
void alloptions();

int main()
{
     system("CLS");
     system("Color 5F");
     system("mode con COLS=700");

system("CLS");
mainloop();
}

void mainloop()
{
    system("CLS");
    char classselection;

    cout<<endl<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<"\n\n\t\t\t\t\t\tWelcome To CSC 104 – OBJECT-ORIENTED PROGRAMMING (OOP) ASSIGNMENT NO. 02"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<endl<<endl<<endl;
    cout<<"\t\tName of Student : Mehar Khan Niazi";
    cout<<"\t\t\t\t\t\t\t\tRoll # / ID # CSC-19F-050"<<endl;
    cout<<"\t\tSection : 2B";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tShift: Morning"<<endl;
    cout<<"\t\tDepartment: Computer Science";
    cout<<"\t\t\t\t\t\t\t\t\tProgram: BS (CS) (4 Years)"<<endl;
    cout<<"\t\tCourse Instructor: Mr. Zubair uddin Shaikh"<<endl;

    cout<<endl<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<"\n\n\t\t\t\t\t\t\t\tCAMPUS MANAGEMENT SYSTEM (CMS)"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************"<<endl;


    cout<<"\t\t\tSelect An Option to Continue:"<<endl<<endl;

    cout<<"\t\t\t1. Person "<<endl;
    cout<<"\t\t\t2. Teacher"<<endl;
    cout<<"\t\t\t3. Student"<<endl;
    cout<<"\t\t\t4. Available Courses List"<<endl;
    cout<<"\t\t\t5. Exits";

    cout<<endl<<endl<<"\t\t\tEnter the Selected Number To Continue : ";
    cin>>classselection;
    if (classselection == '1')
    {
        system("CLS");
        personoption();
    }
    else if (classselection == '2')
    {
        system("CLS");
        teacheroption();
    }
    else if (classselection == '3' )
    {
        system("CLS");
        studentoption();
    }
     else if (classselection == '4' )
    {
        system("CLS");
        courseoption();
    }

}

void personoption()
{

    system("Color 6F");
    person a("Mehar Khan Niazi","01-12-1998","Shah Latif Town, Bin Qasim, Karachi","Phase I, Gulshan e Hadeed Karachi");
    cout<<endl<<"\t\t\t***************************************************************************************************************************";
    cout<<endl<<"\n\t\t\t\t\t\t\t\t\t\tPerson Section "<<endl;
    cout<<"\n\t\t\t***************************************************************************************************************************"<<endl<<endl;
    cout<<endl<<"\t\t\tYou can take user's values by de commenting below code.";
    //a.setname();       //To get Person Name      Setter
    //a.setbirth();      //To Get Person Birth     Setter
    //a.setadress();     //To Get Person Address    Setter
    //a.changeaddress(); //To Change Person Address   Setter

    //a.getname();        //Getter
    //a.getbirth();       //Getter
    //a.getaddress();     //Getter

    cout<<"\n\n\n\t\t\t***************************************************************************************************************************"<<endl<<endl;
    cout<<endl<<"\t\t\tSummary:";
    a.printdata();   // Print Data
    cout<<"\n\n\t\t\t***************************************************************************************************************************"<<endl<<endl;

    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;
    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        personoption();
    }
    else if (classselection == '2')
        {
        system("Color 5F");
        mainloop();
        }
}

void teacheroption()
{
    system("Color 2F");
    cout<<endl<<"\t\t\t***************************************************************************************************************************";
    cout<<endl<<"\n\t\t\t\t\t\t\t\t\t\tTeacher Section "<<endl;
    cout<<"\n\t\t\t***************************************************************************************************************************"<<endl<<endl;
    teacher b("Zubair uddin Shaikh","TCH-111","10-Saghir Hussain Shaheed RoadSaddar, Sindh", "03212217696","zubairuddinshaikh@gmail.com ","22/05/1994","zubair@gmail.com","03004565251","Object Oriented Programming", "Data Science","House No 17-B,Street No 30,Sector F-7/1,ISLAMABAD-44000,PAKISTAN","Machine Learning","Internet of Things" );
    //b.setname();           //To get Teacher Name      Setter
    //b.generateUniqueInt();   //To get Teacher ID      Setter
    //getid();
    //b.setadress();
    //b.setphonenumber();
    //getphonenumber()
   //b.setemailaddress();
   //b.getemailaddress();
    //b.setbirth();
    //b.changesemailaddress();
    //b.changesphonenumber();
     //b.changeaddress();
    //b.courseenrolled();
     //b.getcourseteaching();
    //b.addcourse();
    //getaddcourses();
    //b.removecourse();
    //b.getremovecourses();
    //b.getcourseenrolledstu();

    cout<<"\n\n\n\t\t\t***************************************************************************************************************************"<<endl<<endl;
    cout<<endl<<"\t\t\tSummary:";
    b.printdata();   // Print Data
    cout<<"\n\n\n\t\t\t***************************************************************************************************************************"<<endl<<endl;


    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;
    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        teacheroption();
    }
    else if (classselection == '2')
        {
        system("Color 5F");
        mainloop();
        }
}

void studentoption()
{

    system("Color 1F");
    cout<<endl<<"\t\t\t***************************************************************************************************************************";
    cout<<endl<<"\n\t\t\t\t\t\t\t\t\t\tStudent Section "<<endl;
    cout<<"\n\t\t\t***************************************************************************************************************************"<<endl<<endl;

    student c("Mehar Khan Niazi", "CSC-19F-050","01-12-1998","Shah Latif Town, Bin Qasim, Karachi","03022819689","csc19f050@stu.smiu.edu.pk",2,4,5,"Phase II, Gulshan e Hadeed, Karachi","meharkhanniazi@gmail.com");
    //c.setname();
    //c.getname();
    //c.generateUniqueInt();
    //c.getid();
    //c.setbirth();
    //c.getbirth();

    //c.courseenrolled();
    //c.getcourseenrolledstu(1,3,5);
    //c.setphonenumber();
    //c.getphonenumber();
    //c.setadress();
    //c.getaddress();
    //c.setemailaddress();
    // c.getemailaddress();

   // c.changesemailaddress();
    //c.changeaddress();
    //c.getaddress();
   // c.changesphonenumber();


    cout<<"\n\n\n\t\t\t***************************************************************************************************************************"<<endl<<endl;
   cout<<endl<<"\t\t\tSummary:";
    c.printdata();   // Print Data
    cout<<"\n\n\n\t\t\t***************************************************************************************************************************"<<endl<<endl;

    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;
    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        studentoption();
    }
    else if (classselection == '2')
        {
        system("Color 5F");
        mainloop();
        }
}

void courseoption()
{
    system("Color 8F");
    cout<<endl<<"\t\t\t***************************************************************************************************************************";
    cout<<endl<<"\n\t\t\t\t\t\t\t\t\t\tAvailable Courses' List "<<endl;
    cout<<"\n\t\t\t***************************************************************************************************************************"<<endl;
    course d(7,29,102,4,8,6);
    //d.courseslist();
    //d.numberofstudentreg();
    //d.courseenrolled();
    //d.courselist();

    d.printdata();

    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;

    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        courseoption();
    }
    else if (classselection == '2')
        {
        system("Color 5F");
        mainloop();
        }
}

