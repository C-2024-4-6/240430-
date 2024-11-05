#include <iostream>
using namespace std;
int main()
{
	char x;
	int letters = 0, numbers = 0, space = 0, others = 0;
	while ((x = getchar()) != '\n')
	{
		if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
			letters++;
		else if ('0' <= x && x <= '9')
			numbers++;
		else if (x == ' ')
			space++;
		else
			others++;
	}
	cout << "字母的数量为" << letters<< endl;
	cout << "数字的数量为" <<numbers <<endl;
	cout << "空白的数量为" <<space <<endl;
	cout << "其他的数量为" <<others <<endl;
	system("pause");
	return 0;

}