#include<iostream>
#include<string>
#define MAX 100
using namespace std;

//设计联系人结构体
struct Person
{
	string m_Name;//姓名
	int m_Sex;//性别 1 男 2女
	int m_Age;//年龄
	string m_Phone;//电话
	string m_Addr;//住址
};
//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录的联系人个数
	int m_Size;
};

//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1. 添加联系人  *****" << endl;
	cout << "*****  2. 显示联系人  *****" << endl;
	cout << "*****  3. 删除联系人  *****" << endl;
	cout << "*****  4. 查找联系人  *****" << endl;
	cout << "*****  5. 修改联系人  *****" << endl;
	cout << "*****  6. 清空联系人  *****" << endl;
	cout << "*****  0. 退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

//1. 添加联系人
void addPerson(struct Addressbooks* abs)
{
	//判断通讯录是否已满
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		//姓名
		string name;
		cout << "请输入姓名：";
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别(1--男  2--女): ";
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入：";
		}
		//年龄
		cout << "请输入年龄：";
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入联系电话：";
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入家庭住址：";
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");//清屏操作
	}
}
//2. 显示所有联系人
void showPerson(struct Addressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空; 如果不为0,显示记录的联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}
//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
int isExist(struct Addressbooks* abs, string name)//参数1：通讯录  参数2：对比姓名
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;//如果遍历后都没找到，返回-1
}
//3. 删除指定联系人
void deletePerson(struct Addressbooks* abs)
{
	cout << "请输入您要删除的联系人: ";
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}
//4. 查找指定联系人信息
void findPerson(struct Addressbooks* abs)
{
	cout << "请输入您要查找的联系人姓名：";
	string name;
	cin >> name;

	//判断指定的联系人是否存在
	int ret = isExist(abs, name);

	if (ret != -1)//找到联系人
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else //未找到联系人
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}
//5. 修改指定联系人信息
void modifyPerson(struct Addressbooks* abs)
{
	cout << "请输入您要修改的联系人姓名：";
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)//找到联系人
	{
		//姓名
		string name;
		cout << "请输入姓名：";
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		cout << "请输入性别(1--男  2--女): ";
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入：";
		}
		//年龄
		cout << "请输入年龄：";
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//电话
		cout << "请输入联系电话：";
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//住址
		cout << "请输入家庭住址：";
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功!" << endl;
	}
	else //未找到联系人
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}
//6. 清空所有联系人
void cleanPerson(struct Addressbooks* abs)
{
	abs->m_Size = 0;//将当前记录的联系人数量置为0
	cout << "通讯录已清空！" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//创建通讯录结构体变量
	struct Addressbooks abs;
	//初始化
	abs.m_Size = 0;

	int select = 0;//创建用户输入的变量

	while (1)
	{
		//菜单调用
		showMenu();

		cout << "选择功能：";
		cin >> select;
		switch (select)
		{
		case 1:	//1. 添加联系人
			addPerson(&abs);//利用地址传递可以修改实参
			break;
		case 2:	//2. 显示联系人
			showPerson(&abs);
			break;
		case 3:	//3. 删除联系人
			deletePerson(&abs);
			break;
		case 4:	//4. 查找联系人
			findPerson(&abs);
			break;
		case 5:	//5. 修改联系人
			modifyPerson(&abs);
			break;
		case 6:	//6. 清空联系人
			cleanPerson(&abs);
			break;
		case 0:	//0. 退出通讯录
			cout << "欢迎下次使用!" << endl;
			return 0;
		default:
			break;
		}
	}

	return 0;
}