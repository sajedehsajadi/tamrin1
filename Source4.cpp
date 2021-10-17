#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float* p;
	int a;
	cout << "how many students?";
	cin >> a;
	p = new float[a];
	cout << "enter numbers:\n";
	cin >> p[0];
	float min = p[0], max = 0,sum=p[0];
	for (int i = 1; i < a; i++) {
		cin >> p[i];
		sum += p[i];
		if (p[i] < min)
			min = p[i];
		if (p[i] > max)
			max = p[i];
	}
	cout << "average=" << sum / a<<'\n';
	cout << "minimum=" << min << '\n';
	cout << "maximum=" << max;

}