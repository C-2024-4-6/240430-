#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double cel;
	cout<<"�����������¶�" << endl;
	cin >> cel;
	cout << "�任Ϊ�����¶�Ϊ" << celsius_to_fah(cel)<<"���϶�" << endl;
	double fah;
	cout << "�����뻪���¶�" << endl;
	cin >> fah;
	cout << "�任Ϊ�����¶�Ϊ" << celsius_to_fah(fah) << "���϶�" << endl;
	return 0;
}
