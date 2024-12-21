#include<iostream>
using namespace std;
int num(int n, int day)
{
	if (day == 1)
		return n;
	else {
		return num((n + 1) * 2, day - 1);
	}
}
int main()
{
	cout << "桃子的总数为" << num(1, 10) << endl;
	return 0;
}