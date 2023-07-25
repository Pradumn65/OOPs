// access modifier=> public & private
#include<iostream>
using namespace std;


class hero{

    public: //access modifier (can be use inside or outside of class)
    int age;
    char title;

    private:////access modifier ( that can only use inside class not outside of class)
    char address;

    void print(){
        cout<<address<<endl;
    }



};
  
int main()
{
    hero shubham;
    shubham.age=25;
    shubham.title="singh";
    cout<<sizeof(shubham.title)<<endl;
    cout<<"age of shubham:  "<<shubham.age<<endl;
    cout<<"title of shubham:  "<<shubham.title<<endl;
    return 0;
}