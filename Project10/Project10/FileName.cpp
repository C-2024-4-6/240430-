#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������εı߳�" << endl;
	cin >> a >> b >> c;
	double C = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
		cout << "�����ε��ܳ�Ϊ" << C << endl;
	else
		cout << "�����ڸ�������" << endl;


            if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
                cout << "���������ǵ��������Ρ�" << endl;
            }
            else {
                cout << "�������β��ǵ��������Ρ�" << endl;
            }
			return 0;
}