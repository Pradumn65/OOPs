// static function
// it does not need to create object
// static function can only access the static data member

#include<iostream>
using namespace std;

class character{
    public:
    string name;
    int rollno;
        //static keyword
    static int age;
    // static function
    static int print(){
        return age;
     }

};

int character::age=18;
  
int main()
{

    cout<<character::age<<endl;
    cout<<character::print()<<endl;
    character a;
    cout<<a.age<<endl;
   
    
    return 0;
}