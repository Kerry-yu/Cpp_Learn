#include<iostream>
#include<string>
using namespace std;

//×Ö·û´® ²åÈëºÍÉ¾³ı

void test01()
{
	string str = "hello";

	//²åÈë
	str.insert(1, "111");
	cout << "str=" << str << endl;

	//É¾³ı
	str.erase(1, 3);
	cout << "str=" << str << endl;

}

int main()
{
	test01();

	return 0;
}