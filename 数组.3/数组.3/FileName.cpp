#include<iostream>
using namespace std;
int main()
{
	bool a[100] = {false};
	for (int i = 0; i < 100; i++)
	{
		for (int j = i; j < 100; j += i)
			a[j] = !a[j];
	}
	for(int i=0;i<100;i++)
	{
		if (a[i]) 
		{
			cout << i << endl;
	} 
	}
	return 0;
}