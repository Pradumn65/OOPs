// we cant enherit any class in which there data member are marked as private 

#include<iostream>
using namespace std;
class human{
    // public:
    // int age;
    private:
    int age;
    int hight;
    int weight;

    public:
    int getage(){
        return this->age;
    }

    void setage(int a){
        this->age=a;
    }
};

class male: public human{
    public:
     string name;

     public:
     void walk()
     {
      cout<<"walking"<<endl;  
     }



};
  
int main()
{
    male male1;
    male1.age;
    cout<<male1.age<<endl;
    male1.setage(27);
    cout<<male1.age<<endl;
    male1.walk();
   
    
    return 0;
}