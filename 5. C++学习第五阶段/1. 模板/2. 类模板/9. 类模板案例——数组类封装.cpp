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
	cout << "测试一：内置数据测试" << endl;
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}

	cout << "arr1的打印输出为：" << endl;
	printArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);
	cout << "arr2的打印输出为：" << endl;
	printArray(arr2);
	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删后:" << endl;
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;
}

//测试自定义数据类型
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

//打印数组
void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "\t年龄" << arr[i].m_Age << endl;
	}
}

void test02()
{
	cout << "******************" << endl;
	cout << "测试二：自定义数据测试" << endl;

	MyArray<Person> arr(10);

	Person p1("一", 11);
	Person p2("二", 22);
	Person p3("三", 33);
	Person p4("四", 44);
	Person p5("五", 55);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	printPersonArray(arr);

	//输出容量和大小
	cout << "arr的容量为：" << arr.getCapacity() << endl;
	cout << "arr的大小为：" << arr.getSize() << endl;

}

int main()
{
	test01();
	test02();
	return 0;
}