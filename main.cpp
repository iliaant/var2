#include<iostream>
#include<string>
using namespace std;

int counting(string name, int var){
	char name_1 = name[0];
	int name_int = (int)name_1;
	return name_int % var;
}

int main(){
	int n, i;
	string name;
	cin >> name;
	cin >> n;
	cout << counting(name, n);
}