#include<iostream>
using namespace std;
class cube 
{private:
	int length;
	int width;
	int height;
public:
	void set()
	{
		int length, width, height;
		cout << "������������ĳ�������" << endl;
		cin >> length >> width >> height;
		this->length = length;
		this->width = width;
		this->height = height;
	}
	void v()
	{
		int v;
		v = length * height * width;
		cout << "�����������ǣ�" << v << endl;
	}
};
int main() {
	cube a;
	a.set();
	a.v();
	cube b;
	b.set();
	b.v();
	cube c;
	c.set();
	c.v();
	return 0;
}