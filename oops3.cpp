// getter and setter=> it is function inside the class which is use to access private data member of claas.
#include<iostream>
using namespace std;
class hero{

    private:
    int health;
    char level;

    public:

    int gethealth(){    // getter
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){  // setter
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }


};

  
int main()
{

    hero ram;
    cout<<" health of ram:  "<< ram.gethealth() <<endl;
    ram.sethealth(100);
    ram.setlevel('A');
    cout<<" health of ram:  "<< ram.gethealth()<<endl;
    cout<<" health of ram:  "<< ram.getlevel()<<endl;
    return 0;
}