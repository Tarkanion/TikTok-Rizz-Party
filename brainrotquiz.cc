#include <iostream>
using namespace std;

int main(){
	string s;
	cout<<"Brainrot Quiz! Who is the group leader?"<<endl;
	getline(cin,s);
	if(s=="blue tie kid"){
		cout << "correct" << endl;
	}
	else{
		cout<<"WRONG"<<endl;
	}

	cout<<"whos the founder of brainrot?"<<endl;
	getline(cin,s);
	if(s=="turkish quandale dingle"){
		cout<<"correct"<<endl;
	}
	else{
		cout<<"wrong"<<endl;
	}	
	return 0;
}
