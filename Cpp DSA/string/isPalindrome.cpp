#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[]){
	int length = 0;
	while(str[length]!='\0'){
		length++;
	}
	for (int i=0; i<length/2; ++i){
		if(str[i]!=str[length-i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	char str[100];
	cout << "Enter a string: ";
	cin >> str;
	
	if (isPalindrome(str)){
		cout << "The string is a palindrome" << endl;
	}else{
		cout << "The string is not a palindrome" << endl;
	}
	
	return 0;
}
