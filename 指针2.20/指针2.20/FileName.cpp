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
		cout<<"������16���Ƶ���" << endl;
		cin >>s;
		const char* const hexString = s;
		int a=parseHex(hexString);
		cout<<"��16���Ƶ�����Ϊ10���Ƶ���Ϊ" <<a<< endl;
	}