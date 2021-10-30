#include<iostream>
#include<string>

using namespace std;
//设计一个圆类，求圆的周长
const double PI = 3.14;

class Circle
{
	//访问权限
public://公共权限

	//属性
	int m_r;//半径

	//行为
	double calculateZC()//获取圆的周长
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过圆类 创建具体的圆（对象）
	Circle c1;
	//给圆对象的属性进行赋值
	c1.m_r = 10;

	cout << "圆周长为：" << c1.calculateZC() << endl;

	return 0;
}