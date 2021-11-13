#include<iostream>
#include<string>
#include<list>
using namespace std;

//list容器 数据存取

void test01()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1[0] 不可以用 [] 访问list容器中内容
	//L1[0] 不可以用 at 访问list容器中内容
	//原因是list本质是链表，不是用连续线性空间存储数据，迭代器不支持随机访问的

	cout << "第一个元素为：" << L1.front() << endl;
	cout << "最后一个元素为：" << L1.back() << endl;

	//验证迭代器不支持随机访问
	list<int>::iterator it = L1.begin();

	//it = it + 1; //不支持随机访问
	it++;//支持双向
	it--;

}
int main()
{
	test01();

	return 0;
}