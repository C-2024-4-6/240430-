#include <iostream>             //��������ͷ�ļ���������
#include"student.h"
int main()
{
	Student stud;                //�������
	stud.set_value(007,'m',"HCY");
	stud.display();              //ִ��stud�����display����
	return 0;
}