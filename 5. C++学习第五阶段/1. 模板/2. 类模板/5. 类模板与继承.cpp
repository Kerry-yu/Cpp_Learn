#include<iostream>
#include<string>
using namespace std;

//��ģ����̳�
template<class T>
class Base
{
public:
	T m;
};

//1. ����Ҫ֪�������T����,���ܼ̳и�����
//class Son :public Base
class Son :public Base<int>
{

};

void test01()
{
	Son s1;
}

//2. ��������ָ�������T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
template<class T1, class T2>//����ΪT1������ΪT2
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}
public:
	T1 obj;
};

void test02()
{
	Son2<int, char> s2;
}

int main()
{
	test01();
	test02();

	return 0;
}