#include<iostream>
using namespace std;
double bubble(double a[10])
{
	for (int i = 0; i < 9; i++)
		for (int j = i + 1; j < 10; j++)
			if (a[i] < a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	return 0;
}
int main()
{
	double a[10];
	cout << "ÇëÊäÈë10¸öÊý×Ö" << endl;
	for(int i=0;i<10;i++)
	{
		cin >> a[i];
	}
	bubble(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}