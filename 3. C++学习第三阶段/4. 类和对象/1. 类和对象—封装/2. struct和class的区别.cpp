#include<iostream>
#include<string>
using namespace std;

class C1
{
	int m_A;//默认权限	private
};

struct C2
{
	int m_A;//默认权限	public
};
int main()
{
	C2 c2;
	c2.m_A = 100;

	return 0;
}