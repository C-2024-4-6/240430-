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
	cout << "��ĸ������Ϊ" << letters<< endl;
	cout << "���ֵ�����Ϊ" <<numbers <<endl;
	cout << "�հ׵�����Ϊ" <<space <<endl;
	cout << "����������Ϊ" <<others <<endl;
	system("pause");
	return 0;

}