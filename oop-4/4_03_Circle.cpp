﻿#include "4_03_Circle.h"                //包含头文件
double Circle::Area()                   //求圆的面积
{
	return PI*Radius*Radius;
}
double Circle::Circumference()             //求圆的周长
{
	return 2 * PI*Radius;
}