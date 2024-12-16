#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
		int hour;
	int minute;
	int second;
public:
	void settime()
	{
		cout << "请设置时间" << endl;
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
	Time t1;           //定义t1为Time类对象
	t1.settime();
	t1.showtime();
	return 0;
}