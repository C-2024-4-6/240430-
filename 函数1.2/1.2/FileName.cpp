#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a;
	cout << "请输入一个数字" << endl;
	cin >> a;
	cout << "这个数是否为素数：" << is_prime(a) << endl;
	for (int m = 2,num=0; m < 201; m++)
	{
		if(is_prime(m)==1)
		{
			std::cout << m <<" "; num++;
			if (num % 10 == 0) { cout << std::endl; }
		}
	}
	return 0;
}