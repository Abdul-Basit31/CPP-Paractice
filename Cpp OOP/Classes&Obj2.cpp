#include<iostream>
#include<cmath>
using namespace std;

class calculation {                    //declare class,  Calculation
	public:                            //Access specifier
		int length;                    //Attribute
		int width;                     //Attribute
		int height;                    //Attribute
		
	int volume() {                     //// Declaration of a member function with return type
		return length*width*height;
	}
};

int main()
{
	calculation obj1;                  //declare object
	obj1.length= 2;                    //Data or attribute value
	obj1.width = 3;
	obj1.height =5;
	
	cout<<obj1.volume();               //print data value
}
