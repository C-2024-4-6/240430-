#include<iostream>
using namespace std;
class student {
public:
	int number;
	int score;
	student(int number, int score)
	{
		this->number = number;
		this->score = score;
	}
};
void max(student* a)
{
	int max_score = a[0].score;
	int k = 0;
	for (int i = 1; i < 5; i++)
	{
		if (a[i].score > max_score)
		{
			max_score = a[i].score;
			k = i;
		}
	}
	cout << a[k].number << endl;
}
int main()
{
	student a[5] =
	{ student(1,20),
		student(2,99),
		student(3,86),
		student(4,84),
		student(5,94)
	};
	student* p =a;
	max(p);
}
