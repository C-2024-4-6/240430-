#include<iostream>
using namespace std;
int A(int &a, int &b)
{if(a>b)
	while (b != 0)
	{
		b = a % b;
		return b;
	}
if (b>a)
while (a != 0)
{
	a = b % a;
	return a;
}
}
int main()
{
	int num1, num2;
	int &a = num1;
	int& b = num2;
	cout << "��������������" << endl;
	cin >> num1 >> num2;
	int c = A(a, b);
	cout << "������������С��������" << c << endl;
}