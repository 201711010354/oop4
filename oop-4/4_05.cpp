﻿#include<string>
#include<iostream>
using namespace std;
class Person
{
private:
	int age;
	char *name;
public:
	Person(int n = 1, char *na = "zhuli");          //构造函数
	~Person();
	void Print();                                        //重载函数，用于输出普通成员函数
	void Print() const;                                //重载函数，用于输出常成员函数，const参与重载
	void ModifyAge();                                      //用于修改年龄的普通成员函数
};
Person::Person(int n, char *na)                           //构造函数的定义
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
Person::~Person()                                       //析构函数的定义
{
	delete[]name;
}
void Person::Print()                    //普通成员函数Print（）的定义
{
	cout << "age:" << age << " name:" << name << endl;
	cout << "This is general Print()." << endl;

}
void Person::Print() const                //普通成员函数Print（）的定义,const不可省略
{
	cout << "age:" << age << " name:" << name << endl;
	cout << "This is const Print()." << endl;

}


void Person::ModifyAge()
{
	age++;
}

int main()
{
	const Person p1(17, "wu");                //定义常对象必须初始化
	cout << "Output general object p1" << endl;      
	p1.Print();                               //常对象调用常成员函数
	Person p2(18, "zhang");                   //定义普通的对象
	cout << "Output general object p2" << endl;
	p2.ModifyAge();
	p2.Print();
	





system("pause");
return 0;
}