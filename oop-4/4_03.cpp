#include"4_03_Circle.h"
/*********************************************
Topic :
Author:Qiu xiaoli
Date  :2018 -11 -16 -19:08:22

**********************************************/
#include<iostream>
using namespace std;





int main()
{
	Circle c1(3.5), c2;                    //定义类的两个对象，c2的半径用默认值
	cout << "area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;
	cout << "area of c2=" << c2.Area() << ",circumference of c2=" << c2.Circumference() << endl;

system("pause");
return 0;
}