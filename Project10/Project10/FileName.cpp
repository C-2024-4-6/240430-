#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的边长" << endl;
	cin >> a >> b >> c;
	double C = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
		cout << "三角形的周长为" << C << endl;
	else
		cout << "不存在该三角形" << endl;


            if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
                cout << "该三角形是等腰三角形。" << endl;
            }
            else {
                cout << "该三角形不是等腰三角形。" << endl;
            }
			return 0;
}