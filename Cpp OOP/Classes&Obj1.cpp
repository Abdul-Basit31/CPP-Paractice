#include<iostream>
using namespace std;

class car {             //Declare class, car 
    public:                //Access Specifier
        string brand;       //Data members
        string model;       //Data members
};

int main()
{
	car obj1,obj2;                                     //create first obj.
	obj1.brand = "Toyota Corolla";
	obj1.model = "dhg756575";                      //accessing data member   
	
	obj2.brand = "Rivo";
	obj2.model = "dfd856575";
	
	//print data values
	cout<<obj2.brand<<"\n";
	cout<<obj2.model<<"\n";
	cout<<obj1.brand;
	return 0;
}
