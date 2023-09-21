//C++ Numbers and Strings

Adding Numbers and Strings

//WARNING!

//C++ uses the + operator for both addition and concatenation.

//Numbers are added. Strings are concatenated.

Example
int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer)


If you add two strings, the result will be a string concatenation:

Example
string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)



If you try to add a number to a string, an error occurs:
	
Example
string x = "10";
int y = 20;
string z = x + y;
