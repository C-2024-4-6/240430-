#include<iostream>
#include<cstring>
using namespace std;
int indexOf(char s1[],char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1; i++)
	{
		int j;
		for (j = 0; j < len1; j++)
		{
			if (s2[j+i] != s1[j]) { break; }
		}

			if (j == len1) { return i+1; }
	}
	return -1;
}
int main()
{
	char s1[999], s2[999];
	cout<<"请输入s1与s2的内容" << endl;
	cin.getline(s1,999);
	cin.getline(s2, 999);
	int result = indexOf(s1, s2);
		if(result==-1){cout<<"indexOf(s1, s2)is:"<<result << endl; }
		else { cout << "indexOf(s1, s2)is:" << result << endl; }
		return 0;
}