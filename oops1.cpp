// creation of class and object

#include<iostream>
using namespace std;

class student{
    public:
    int age;
    char name;
    char home;
    long long int phoneno;
    int hight;
    int weight;

};
  
int main()
{   
    

    student pradumn;
    pradumn.age=20;
    pradumn.hight=172;
    pradumn.home="koiriyapar";
    pradumn.name="pradumn chauhan";
    pradumn.weight=68;
    pradumn.phoneno=8933980937;

    cout<<"pradumn age: "<<pradumn.age<<endl;
    cout<<"pradumn sirname: "<<pradumn.name<<endl;
    cout<<"pradumn home: "<<pradumn.home<<endl;
    cout<<"pradumn phone no.: "<<pradumn.phoneno<<endl;
    cout<<"pradumn hight: "<<pradumn.hight<<endl;
    cout<<"pradumn weight: "<<pradumn.weight<<endl;
    
    return 0;
}