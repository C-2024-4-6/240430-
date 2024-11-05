#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float T;
	cout << "" << endl;
	cin >> T;
	float t;
	t = (T - 32) / 1.8;
	cout << "" << endl;
	cout << "" << fixed << setprecision << t << endl;
}