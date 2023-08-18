// copy contructor
#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int car_no;
 
    car(string brandname,int carno){
        brand=brandname;
        car_no= carno;
    }


};
  
int main()
{
    car scorpio("Mahindra",1000);
    cout<<scorpio.brand<<endl;
    cout<<scorpio.car_no<<endl;
    
    car thor(scorpio);
    cout<<thor.brand<<endl;
    cout<<thor.car_no<<endl;

    return 0;
}