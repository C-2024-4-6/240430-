class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int num,char sex,const char name1[])
	{
		this->num = num;
		this->sex = sex;
		for(int i=0;i<20;i++)
		{
			name[i] = name1[i];
		}
	}
private:
	int num;
	char sex;
	char name[20];
};
