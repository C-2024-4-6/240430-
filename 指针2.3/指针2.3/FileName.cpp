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
	cout << "��ȷ��������Ԫ�صĸ���" << endl;
      cin>>i;
	int* p = new int[i];
	cout<<"�����������еĸ�Ԫ�ص�ֵ" << endl;
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