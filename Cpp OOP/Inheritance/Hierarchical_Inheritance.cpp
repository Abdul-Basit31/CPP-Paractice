//Implementation of  hierarchical inheritance
#include<bits/stdc++.h>
using namespace std;

class A{
	public:
		void fun1(){
			cout<<"Inside class A"<<endl;
		}
};
class B:public A{
	public:
		void fun2(){
			cout<<"Inside class B"<<endl;
		}
};
class C:public A{
	public:
		void fun3(){
			cout<<"Inside class C"<<endl;
		}
};
int main(){
	A o1;
	B o2;
	C o3;
	o1.fun1();
	o2.fun2();
	o2.fun1();
	o3.fun1();
	o3.fun3();
	return 0;
}
