#include<iostream>
#include<string>
#include<map>
using namespace std;

//map容器 查找和统计

void test01()
{
	//查找
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "查找到元素 key = " << (*pos).first << "  value = " << (*pos).second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	//map不允许插入重复元素 所有count统计结果只为 0 或 1
	int num = m.count(3);
	cout << "num = " << num << endl;

}
int main()
{
	test01();

	return 0;
}