//concept  static allocation and dynamic allocation
#include<iostream>
using namespace std;

class student{

     public:
    int rollno;
    char name;
};
  
int main()
{ 
    // static allocation
    student syam;
    syam.rollno=24;
    syam.name="Syam rajput";
    cout<<"syam roll no:  "<<syam.rollno<<endl;
    cout<<"syam Name:  "<<syam.name<<endl;

    //dynamic allocation
    student *ram= new student;
    (*ram).rollno=7;
     ram->name="Ram singh";
    cout<<"ram roll no:  "<<ram->rollno<<endl;
    cout<<"ram Name:  "<<ram->name<<endl;

    
    return 0;
}