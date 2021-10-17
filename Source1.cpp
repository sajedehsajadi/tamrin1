#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	int b,sum=0;
	string s = "continue";
	while (s != "exit") {
		cout << "enter number:";
		cin >> b;
		sum = sum + b;
		cout << "continue?(continue or exit)";
			cin >> s;
	}
	cout << "sum=" << sum;
    
}