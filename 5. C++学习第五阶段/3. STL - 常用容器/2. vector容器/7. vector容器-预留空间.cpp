#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector���� Ԥ���ռ�

void test01()
{
	vector<int> v;

	//����reserveԤ���ռ�
	v.reserve(10000);

	int num = 0;//ͳ�ƿ��ٴ���
	int* p = NULL;

	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);

		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "num=" << num << endl;



}

int main()
{
	test01();

	return 0;
}