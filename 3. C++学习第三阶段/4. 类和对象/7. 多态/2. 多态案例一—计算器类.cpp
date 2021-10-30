#include<iostream>
#include<string>
using namespace std;

//分别利用普通写法和多态技术实现计算器

//普通写法
class Caculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}

		//如果想扩展新的功能，需要修改源码
		//在真实开发中 提倡 开闭原则：对扩展进行开发，对修改进行关闭
	}
public:
	int m_Num1;
	int m_Num2;
};

//多态写法

//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
public:
	int m_Num1;
	int m_Num2;
};

//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算器
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算器
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test01()
{
	Caculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 5;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
}

void test02()
{
	//多态使用条件
	//父类指针或者引用指向子类对象

	//加法运算
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->m_Num1 + abc->m_Num2 << endl;
	//堆区开辟的数据用完需要销毁
	delete abc;

	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->m_Num1 - abc->m_Num2 << endl;
	//堆区开辟的数据用完需要销毁
	delete abc;
}

int main()
{
	test01();
	test02();

	return 0;
}