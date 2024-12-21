#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		list3[i+size1] = list2[i];
	}
}
int bubble(int a[], int MAX)
{
	for (int i = 0; i < MAX; i++)
		for (int j = i + 1; j < MAX; j++)
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
	int a1[4], a2[4], a3[8];
	cout<<"请输入数组1的数" << endl;
	for(int i=0;i<4;i++)
	{
		cin >> a1[i];
	}
	cout << "请输入数组2的数" << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> a2[i];
	}
	merge(a1, 4, a2, 4, a3);
	bubble(a3, 8);
	for (int i = 0; i < 8; i++)
	{
		cout << a3[i] << endl;
	}
	return 0;
}