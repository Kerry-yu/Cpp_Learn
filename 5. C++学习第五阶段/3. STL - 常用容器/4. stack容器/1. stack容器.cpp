#include<iostream>
#include<string>
#include<stack>
using namespace std;

//ջ stack����

void test01()
{
	//�ص㣺�����Ƚ�������ݽṹ
	stack<int> s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;

		//��ջ
		s.pop();
	}

	cout << "ջ�Ĵ�С��" << s.size() << endl;
}
int main()
{
	test01();

	return 0;
}