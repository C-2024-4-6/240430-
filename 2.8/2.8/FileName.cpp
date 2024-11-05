#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (double b, c; c - b <= 1.0e-5; c = b)
	{
		c = 0.5 * (b + a / b);

		cout << c << endl;
	}
	return 0;
}