#include<iostream>
#include<string>
using namespace std;

class C1
{
	int m_A;//Ĭ��Ȩ��	private
};

struct C2
{
	int m_A;//Ĭ��Ȩ��	public
};
int main()
{
	C2 c2;
	c2.m_A = 100;

	return 0;
}