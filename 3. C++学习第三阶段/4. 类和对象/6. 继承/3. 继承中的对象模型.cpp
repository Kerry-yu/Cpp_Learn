#include<iostream>
#include<string>
using namespace std;

//继承中的对象模型
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
private:
	int m_D;
};

void test01()
{
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性被子类继承下去了，但是被编译器隐藏，不可以访问
	Son son;
	cout << "size of son = " << sizeof(son) << endl;
}
int main()
{
	test01();

	return 0;
}