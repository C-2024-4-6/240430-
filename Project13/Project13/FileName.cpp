#include <iostream>
using namespace std;
int main()
{
	int a = 2, W = 0, day = 0, b = 0;
	for (; b < 100; day++)
	{
		a *= 2;
		b += a;
		W = b * 0.8 / day;
	}
	cout << "平均费用为" <<W<< endl;
	return 0;

}