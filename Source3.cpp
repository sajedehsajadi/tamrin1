#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
	int time, h, m, s,a;
	cout << "enter time (seconds):";
	cin >> time;
	h = time / 3600;
	a = time % 3600;
	m = a / 60;
	s = a % 60;
	cout << "time=" << h << ":" << m << ":" << s;
}