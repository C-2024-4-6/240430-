#include<iostream>
using namespace std;
void paixu(int*s,int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j =0; j < n-1-i; j++)
		{
			if (s[j] > s[j + 1]) {
				int z;
				z= s[j];
				s[j] = s[j + 1];
				s[j + 1] = z;
			}
		}
	}
}
int main()
{
	int i;
	cout << "请确认数组中元素的个数" << endl;
      cin>>i;
	int* p = new int[i];
	cout<<"请输入数组中的各元素的值" << endl;
	for (int j = 0; j < i; j++)
	{
		cin >> p[j];
	}
	paixu(p,i);
	for(int m=0;m<i;m++)
	{
		cout << p[m] << " ";
	}
	cout << endl;
	delete[]p;
	return 0;
}