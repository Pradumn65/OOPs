// constructor: constructor is nothing but it is function called when an object is created.
// it has no return type.
// the constructer function has same name as class name.
#include<iostream>
using namespace std;
class hero{
    public:
    int age;
    
    hero(){
        cout<<" this is constructor"<<endl; 
    }


};
  
int main()
{ 
    // object created statically
   hero ramesh;// here when we creat object constructor is called
   cout<<"Ramesh"<<endl;

   //object created dynamically
   hero *ram=new hero;// here also constructor is called
    return 0;
}