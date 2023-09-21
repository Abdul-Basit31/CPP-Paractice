#include<iostream>
using namespace std;

class print {
	public:
	    static int value;    //declare static member variable with static keyword and also define out of the class.s
};
int value;

int main()
{
	cout<<value;
}
