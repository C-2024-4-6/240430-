#include<iostream>
using namespace std;
class point 
{private:
	int x;
	int y;
public:
	point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setpoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point a(60, 80);
	a.setpoint(10, 20);
	a.display();
}