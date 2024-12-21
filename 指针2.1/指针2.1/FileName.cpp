#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1; i++)
	{
		int j;
		for (j = 0; j < len1; j++)
		{
			if (s2[j+i]!=s1[j]) { break; }
		}

			if (j == len1) { return i+1; }
	}
	return -1;
}
int main()
{
	char s1[999], s2[999];
	cout << "请输入s1和s2的内容" << endl;
	cin.getline(s1, 999);
	cin.getline(s2, 999);
	char* p1 = s1;
	char* p2 = s2;
	int result = indexof(p1, p2);
	cout << "indexof(s1,s2) is :" << result << endl;
}
