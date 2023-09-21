C++ String Length

String Length
To get the length of a string, use the length() function:
	
//Example1
#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length();
  return 0;
}





Tip: You might see some C++ programs that use the size() function to get the length of a string. 
This is just an alias of length(). It is completely up to you if you want to use length() or size():

//Example2
#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.size();
  return 0;
}

