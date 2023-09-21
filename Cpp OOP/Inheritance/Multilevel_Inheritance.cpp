#include<iostream>           
using namespace std;

class A{
	public:
		void funA(){
			cout<<"Wellcome1\n";
		}
};

class B : public A{
	public:
		void funB(){
			cout<<"Wellcome2";
		}
};

class C : public B {
};

int main(){
	C c;
	c.funA();
	c.funB();
}
