#include <iostream>  
using namespace std;

int main() {
	double a, b;
	char operation;
	cout << "请输入运算符" << endl;
	cin >> operation;
	switch (operation)
	{
	case'+':
	//加法
	cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入第二个数" << endl;
	cin >> b;
	cout << "结果为" << a + b << endl;
	break;
	case'-':
	//减法
	cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入第二个数" << endl;
	cin >> b;
	cout << "结果为" << a - b << endl;
	break;
	//乘法
	case'*':
		cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入第二个数" << endl;
	cin >> b;
	cout << "结果为" << a * b << endl;
	break;
	//除法
	case'/':
		cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入第二个数" << endl;
	cin >> b;
	if (b == 0)
		cout << "0不能做除数" << endl;
	else
	cout << "结果为" << a / b << endl;
	return 0;
	
}








}