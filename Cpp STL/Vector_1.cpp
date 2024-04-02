#include<bits/stdc++.h>
using namespace std;

void Q2(){
	vector<int> v1={1,2,3};
	vector<int> v2={4,5,6};
    v1.insert(v1.end(), v2.begin(), v2.end());
    cout<<"size of vector= "<<v1.size()<<endl;
    	for(int i=0; i<v1.size(); i++){
		   cout<<v1[i]<<endl;
    }
}

void Q4(){
	vector<int> vec={10,20,30,40,50};
	vec.pop_back();
	vec.insert(vec.begin() + 1, 25);
	for(int i=0; i<vec.size(); i++){
		cout<<vec[i]<<endl;
    }
}

void Q1(){
	vector<int> num;
	num.push_back(5);
	num.push_back(10);
	num.push_back(15);
	for(int i=0; i<num.size(); i++){
		cout<<num[i]<<endl;
    }
}

void Q3(){
	vector<string> str{"apple","banana","orange"};
	for(int i=0; i<str.size(); i++){
		cout<<str[i]<<endl;
	}
}

int main(){
	Q1();
	Q2();
	Q3();
	Q4();
	return 0;
}
