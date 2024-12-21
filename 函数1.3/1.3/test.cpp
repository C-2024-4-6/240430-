#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double cel;
	cout<<"请输入摄氏温度" << endl;
	cin >> cel;
	cout << "变换为华氏温度为" << celsius_to_fah(cel)<<"华氏度" << endl;
	double fah;
	cout << "请输入华氏温度" << endl;
	cin >> fah;
	cout << "变换为摄氏温度为" << celsius_to_fah(fah) << "摄氏度" << endl;
	return 0;
}
