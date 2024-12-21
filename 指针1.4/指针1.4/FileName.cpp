#include<iostream>
using namespace std;
int* f()
{
	int* p1 = new int[4] {1,2,3,4};
	return p1;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete []p;
}