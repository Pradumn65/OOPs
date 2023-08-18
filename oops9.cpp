// copy assignment operator =
#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int car_no;
    string owner;
 
    car(string brandname,int carno){
        brand=brandname;
        car_no= carno;
    }


};
  
int main()
{
    car scorpio("Mahindra",1000);
    scorpio.owner="Pradumn Chauhan";
    cout<<scorpio.brand<<endl;
    cout<<scorpio.car_no<<endl;
    
    car bolero("mahindra_1",1001);
    // copy assignment opretor
    bolero=scorpio;
    cout<<bolero.brand<<endl;
    cout<<bolero.car_no<<endl;
    cout<<bolero.owner<<endl;


    

    return 0;
}