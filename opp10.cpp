// static keyword
// staatic keyword does not need any object creation to access static data member


#include<iostream>
using namespace std;

class character{
    public:
    string name;
    //static keyword
    static int age;

};

int character::age=18;
  
int main()
{

    cout<<character::age<<endl;
    character a;
    cout<<a.age<<endl;
    
    return 0;
}