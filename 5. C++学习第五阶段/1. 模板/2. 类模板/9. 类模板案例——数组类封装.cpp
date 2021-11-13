#include "myArray.hpp"

void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void test01()
{
	cout << "����һ���������ݲ���" << endl;
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}

	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printArray(arr2);
	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��:" << endl;
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
}

//�����Զ�����������
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

//��ӡ����
void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << "\t����" << arr[i].m_Age << endl;
	}
}

void test02()
{
	cout << "******************" << endl;
	cout << "���Զ����Զ������ݲ���" << endl;

	MyArray<Person> arr(10);

	Person p1("һ", 11);
	Person p2("��", 22);
	Person p3("��", 33);
	Person p4("��", 44);
	Person p5("��", 55);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArray(arr);

	//��������ʹ�С
	cout << "arr������Ϊ��" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;

}

int main()
{
	test01();
	test02();
	return 0;
}