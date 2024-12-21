#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int len = strlen(hexString);
	int result=.0;
	int a = 1;
	for (int i=len-1;i>=0;i--) 
	{
		int num;
		if (hexString[i] >= '0' && hexString[i] <= '9') { num = hexString[i] - '0'; }
		else if (hexString[i] >= 'a' && hexString[i] <= 'f') { num = hexString[i] - 'a' + 10; }
		else if (hexString[i] >= 'A' && hexString[i] <= 'F') { num = hexString[i] - 'a' + 10; }
		result += num * a;
		a*= 16;
	}
		return result;
}
	int main()
	{
		char s[999] = { 0 };
		cout<<"请输入16进制的数" << endl;
		cin >>s;
		const char* const hexString = s;
		int a=parseHex(hexString);
		cout<<"该16进制的数变为10进制的数为" <<a<< endl;
	}