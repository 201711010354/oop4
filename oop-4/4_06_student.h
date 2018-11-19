﻿#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
	static int count;              //实际有效的学生个数，小于等于对象的个数
public:
	Student();
	Student(char *na, char *id, char *num, char *space, int ag);
	Student(const Student &per);
	~Student();
	char* GetName() const;           //可以定义为常成员函数
	char* GetID();                    //不可以定义为常成员函数
	char* GetNumber();
	char* GetSpec();
	int GetAge()const;
	void Display()const;
	void Input();
	void Insert();
	void Delete();
	static int GetCount();              //新增加的静态成员函数
};
#endif