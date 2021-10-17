#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,sum=0,b=1,c=1;
	cout << "how many numbers?\n";
	cin >> a;
	cout << "1  1  ";
	for (int i = 2; i < a; i++) {
		sum = b + c;
		b = c;
		c = sum;
		cout << sum << "  ";
	}
}