#include<iostream>
#include<string>
#include<map>
using namespace std;

//map容器 插入和删除

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "   value = " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int> m;

	//插入
	//第一种
	m.insert(pair<int, int>(1, 10));

	//第二种
	m.insert(make_pair(2, 20));

	//第三种
	m.insert(map<int, int>::value_type(3, 30));

	//第四种
	m[4] = 40;

	//[] 不建议用作插入   可以利用key访问value
	cout << m[5] << endl;

	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3); //按照key删除
	printMap(m);

	m.erase(m.begin(), m.end());//按照区间方式删除

	m.clear();//清空
}

int main()
{
	test01();

	return 0;
}