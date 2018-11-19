#include"4_04_Circle.h"
double Circle::Area()
{
	return PI*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
double Circle::GetRadius()const               //常成员函数，获取半径值的实现代码，此例新增加
{
	return Radius;
}