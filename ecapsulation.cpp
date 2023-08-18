// ecapssulation: wrapping up data member and function in class.
// encapsulation means information hiding or data hiding.
// fully encapsulation: in which all the data member are marked as private.
//encapsulation advantage: security,can marked as read only,code reusability,unit teasting

#include<iostream>
using namespace std;

class student{
    private:
    string name; 
    int age;
    int hight;
    
    public:
    int getage(){
        return this->age;
    }

};
  
int main()
{
    student ram;

    return 0;
}