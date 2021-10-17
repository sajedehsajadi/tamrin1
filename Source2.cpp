#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int h, m, s;
	cout << "enter time:";
	cin >> h >> m >> s;
	int sum;
	sum = (h * 3600) + (m * 60) + s;
	cout << "time to second:" << sum<<" second";
}