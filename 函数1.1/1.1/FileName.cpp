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
	cout << "请输入两个整数" << endl;
	cin >> num1 >> num2;
	int c = A(a, b);
	cout << "这两个数的最小公因数是" << c << endl;
}