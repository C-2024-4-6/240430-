//#include<iostream>
//using namespace std;
//int main()

//1.1
//{  
	//int k = 0;
//int i = k + 1;
	//cout << i++ << endl;
	///cout << i++ << endl;
	///cout << "welcome c++" << endl;

	//1.2
	//const double PI = 3.14;
	//double r;
	//double h;
	//cout << "请输入圆锥的半径r和锥高h" << endl;
	//cin >> r;
	//cin >> h;
	//double v;
	//v= (1.0 / 3) * r * r * h * PI;
	//cout << "圆锥的体积为" << v << endl;

	//1.3
	//cout << "char length:" << sizeof(char) << endl;
	////cout << "int length:" << sizeof(int) << endl;
	//cout << "bool length:" << sizeof(bool) << endl;
	//cout << "float length:" << sizeof(float) << endl;

	
	//return 0;
//}

//实验二2.1
#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "输入一个字符" << endl;
	cin >> a;
	if (a >= 'a') { a = a - 'a' + 'A'; cout << "大写为" << a << endl; }
	else { cout << (int)a + 1 << endl; }
	system("pause");
}