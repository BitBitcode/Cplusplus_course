// 1、两数相加.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>		//加上“.h”后缀报错
using namespace std;		//不加这个会报错

int add(int a, int b);		//函数原型说明

void main()		//主函数
{
	int x, y, sum;		//定义三个整型变量
	cout << "请输入两个整数：" << '\n';		//界面：提示用户输入两个数
	cin >> x;		//从键盘输入变量x的值
	cin >> y;		//从键盘输入变量y的值
	sum = add(x, y);		//调用自定义函数“add”，将得到的值（返回值c）赋值给变量“sum”
	cout << "两数之和为：" << sum << '\n';		//输出两个数的和（也即sum的值）到屏幕
}

int add(int a, int b)		//自定义“add”函数，函数值为整型变量
{
	int c;		//定义一个整型变量
	c = a + b;		//计算输入函数的两个数的和
	return c;		//将c的值返回，通过add带回调用处
}
