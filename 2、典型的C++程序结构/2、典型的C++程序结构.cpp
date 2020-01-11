// 2、典型的C++程序结构.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 注意：该代码不能运行，仅作为例子！

#include <iostream>

//类的声明部分
class A {
    int x, y, z;        //类A的数据成员声明
    function() 
    { 
    …
    }         //类A的成员函数声明
};
// 类的使用部分 
int main()
{
    A a;                // 创建一个类A的对象a
    …
    a.fun();            // 给对象a发消息,调用成员函数function()

    return 0;
}

