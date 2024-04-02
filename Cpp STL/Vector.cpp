#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
	cout<<"Size"<<" "<<v.size()<<endl;
	for(int i=0; i<v.size(); i++){
	cout<<v[i]<<" "<<endl;	
	}
}

int main(){
	vector<int> v(5,3);
	v.push_back(5);
	v.pop_back();
	/*int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}*/
	printvec(v);
	vector<int> v2=v;
	v2.push_back(5);
	printvec(v2);
	return 0;
}
