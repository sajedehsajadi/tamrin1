#include<iostream>
#include<conio.h>
#include<random>
#include<time.h>
using namespace std;
int main()
{
	int x,y,j=1;
	cout << "chand karbar: ";
	cin >> x;
	cout << "chand dor mikhahid bazi konid? ";
	cin >> y;
	srand(time(0));
	while (j <= y)
	{
		cout << "dor " << j << " bazi=\n";
		int a;
		for (int i = 1; i <= x; i++) 
		{
			cout << "karbar " << i << "=\n";
			a = rand() % 6 + 1;
			cout << a << '\n';
			while (a == 6) {
				cout << "dobare tas biandazid karbar "<<i<<"=\n";
				a = rand() % 6 + 1;
				cout << a<<'\n';
			}
		}
		j++;
	}
}