#include<iostream>                      //Declaration of library that print of output on your console
using namespace std;

class A{                               //Declared first class, class A.
	public:                            //Access Specifier
		void func(){                   //Declare member function
			cout<<"Inherited";
		}
};

class B : public A {                  //Inherits public attribute of class A in class B.
};

int main()
{
	B b;
	b.func();
}
