#include<iostream>
#include<string>
#include<conio.h>
#include"person.h"
using namespace std;

  person::person()
  {
      cout<<endl;
  }

string person::setname()
{
    cout<<"\t\t\tEnter Your Name: ";
    cin.ignore();
    getline(cin,name);
}

string person::getname()
{
   cout<<endl<<"\t\t\tName : "<<name;
}

string person::setbirth()
{
    cout<<"\t\t\tEnter Your Date of Birth : ";
    getline(cin,birth);
}


string person::getbirth()
{
   cout<<endl<<"\t\t\tDate of Birth : "<<birth;
}

string person::setadress()
{
    cout<<"\t\t\tEnter Your Address : ";
    getline(cin,address);
}

string person::getaddress()
{
   cout<<endl<<"\t\t\tAddress : "<<address;
}


string person :: changeaddress()
    {
        char name;
    cout<<endl<<"\t\t\tDo you want to change Address? If yes, then type 'Y' otherwise type 'N'.";
    cin>>name;
    if(name=='Y' || name == 'y')
    {
        cout<<endl<<"\t\t\tEnter Your New Address : ";
        cin.ignore();
        getline(cin,changeaddress1);
        address =changeaddress1;
    }
    }



string person::printdata()
{
    cout<<endl<<endl<<"\t\t\tName : "<<name;
    cout<<endl<<"\t\t\tDate of Birth : "<<birth;
    cout<<endl<<"\t\t\tAddress : "<<address<<endl;
}

