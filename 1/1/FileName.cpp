#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�
		int hour;
	int minute;
	int second;
public:
	void settime()
	{
		cout << "������ʱ��" << endl;
		int a, b, c;
		cin >> a >> b >> c;
		hour = a;
		minute = b;
		second = c;
	}
	void showtime()
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.settime();
	t1.showtime();
	return 0;
}