> C++核心编程项目练习——职工管理系统

职工管理系统可以用来管理公司内所有员工的信息

本项目主要利用C++来实现一个基于多态的职工管理系统

## 1. 管理系统需求

公司中职工分为三类：普通员工、经理、老板，显示信息时，需要显示职工编号、职工姓名、职工岗位、以及职责

普通员工职责：完成经理交给的任务

经理职责：完成老板交给的任务，并下发任务给员工

老板职责：管理公司所有事务

--- -

管理系统中需要实现的功能如下：

+ 退出管理程序：退出当前管理系统
+ 增加职工信息：实现批量添加职工功能，将信息录入到文件中，职工信息为：职工编号、姓名、部门编号
+ 显示职工信息：显示公司内部所有职工的信息
+ 删除离职职工：按照编号删除指定的职工
+ 修改职工信息：按照编号修改职工个人信息
+ 查找职工信息：按照职工的编号或者职工的姓名进行查找相关的人员信息
+ 按照编号排序：按照职工的编号或者职工的姓名进行查找相关的人员信息
+ 按照编号排序：按照职工编号，进行排序，排序规则由用户指定
+ 清空所有文档：清空文件中记录的所有职工信息（清空前需再次确认，防止误删）

系统界面效果图：

## 2. 创建项目

### 2.1 创建项目

vs2019中创建空C++项目

### 2.2 添加文件

添加职工管理系统.cpp

## 3. 创建管理类

管理类负责的内容如下：

+ 与用户的沟通菜单界面
+ 对职工的增删改查的操作
+ 对文件的读写交互

### 3.1 创建文件

在头文件和源文件夹下分别创建workerManager.h和workerManager.cpp文件

![image-20211030173322301](https://img.wkeyu.cn/blog/paper/20211030173322.png)

### 3.2 头文件实现

在workerManager.h中设计管理类

**代码：**

```cpp
#pragma once
#include<iostream>
#include<string>
using namespace std;

class WokerManager
{
public:
	WokerManager();
	~WokerManager();

private:

};
```

### 3.3 源文件实现

在workerManager.cpp中将构造和析构函数空实现补全

```cpp
#include "workerManager.h"

WokerManager::WokerManager()
{
}

WokerManager::~WokerManager()
{
}
```

## 4. 菜单功能

功能描述：与用户的沟通界面

### 4.1 添加成员函数

在管理类workerManager.h中 添加成员函数`void show_Menu();`

![image-20211030174311057](https://img.wkeyu.cn/blog/paper/20211030174311.png)

### 4.2 菜单功能实现

在管理类workManager.cpp中实现`void show_Menu();`

```cpp
#include "workerManager.h"

WorkerManager::WorkerManager()
{
}

//展示菜单
void WorkerManager::Show_Menu()
{
	cout << "*******************************************************" << endl;
	cout << "**************  欢迎使用职工管理系统!  ****************" << endl;
	cout << "*****************  0.退出管理程序  ********************" << endl;
	cout << "*****************  1.增加职工信息  ********************" << endl;
	cout << "*****************  2.显示职工信息  ********************" << endl;
	cout << "*****************  3.删除离职员工  ********************" << endl;
	cout << "*****************  4.修改职工信息  ********************" << endl;
	cout << "*****************  5.查找职工信息  ********************" << endl;
	cout << "*****************  6.按照编号排序  ********************" << endl;
	cout << "*****************  7.清空所有文档  ********************" << endl;
	cout << "*******************************************************" << endl;
	cout << endl;
}

WorkerManager::~WorkerManager()
{
}
```

### 4.3 测试菜单功能

在职工管理系统.cpp中测试菜单功能

**代码：**

```cpp
#include<iostream>
#include<string>
#include "workerManager.h"
using namespace std;


int main()
{
	//实例化管理者对象
	WorkerManager wm;

	//调用展示成员函数
	wm.Show_Menu();

	system("pause");
	return 0;
}
```

运行效果如图：

![image-20211030175332256](https://img.wkeyu.cn/blog/paper/20211030175332.png)

## 5 退出功能

### 5.1 提供功能接口

在main函数中提供分支选择，提供每个功能接口

**代码：**

```cpp
int main()
{
	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;//存储用户做出的选项

	while (true)
	{
		//调用展示成员函数
		wm.Show_Menu();

		cout << "请输入您的选择：";
		cin >> choice;

		switch (choice)
		{
		case 0:	//退出系统
			break;
		case 1:	//增加职工
			break;
		case 2:	//显示职工
			break;
		case 3:	//删除职工
			break;
		case 4:	//修改职工
			break;
		case 5:	//查找职工
			break;
		case 6:	//排序职工
			break;
		case 7:	//清空文档
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}
```

### 5.2 实现退出功能

在workerManager.h中提供退出系统的成员函数`void exitSystem();`，在workerManager.cpp中提供具体的功能实现

```cpp
//退出系统
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);//退出程序
}

```

### 5.3 测试功能

在main函数分支0选项中，调用退出程序的接口

```cpp
case 0:	//退出系统
	wm.ExitSystem();
	break;
```

输出结果：

![image-20211031103856474](https://img.wkeyu.cn/blog/paper/20211031103905.png)

## 6. 创建职工类

### 6.1 创建职工抽象类

职工的分类为：普通员工、经理、老板

将三种职工抽象到一个类（worker）中，利用多态管理不同职工种类

职工的属性为：职工编号、职工姓名、职工所在部门编号

职工的行为是：岗位职责信息描述，获取岗位名称  

----

头文件文件夹下，创建worker.h 文件并添加如下代码：

```cpp
#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工抽象类
class Worker
{
public:
	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;

public:
	int m_Id;	//职工编号
	string m_Name;	//职工姓名
	int m_DeptId;	//部门编号
};
```

### 6.2 创建普通员工类

普通员工类**继承**职工抽象类，并重写父类中的纯虚函数

在头文件和源文件的文件夹下分别创建employee.h和employee.cpp文件

employee.h中代码如下：

```cpp
#pragma once
#include "worker.h"

//职工类
class Employee :public Worker
{
public:
	//构造函数
	Employee(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();

};
```

 employee.cpp中代码如下：

```cpp
#include "employee.h"

//构造函数
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务。" << endl;
}

//获取岗位名称
string Employee::getDeptName()
{
	return string("员工");
}
```

### 6.3 创建经理类

经理类**继承**职工抽象类，并重写父类中的纯虚函数，和普通员工类似

在头文件和源文件的文件夹下分别创建manager.h和manager.cpp文件

manager.h中代码如下：

```cpp
#pragma once
#include "worker.h"

//经理类
class Manager :public Worker
{
public:
	//构造函数
	Manager(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();

};
```

manager.cpp中代码如下：

```cpp
#include "manager.h"

//构造函数
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Manager::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板交给的任务，并下发给员工" << endl;
}

//获取岗位名称
string Manager::getDeptName()
{
	return string("经理");
}
```

### 6.4 创建老板类

老板类**继承**职工抽象类，并重写父类中的纯虚函数，和普通员工类似

在头文件和源文件的文件夹下分别创建boss.h和boss.cpp文件

boss.h中代码如下：

```cpp
#pragma once
#include "worker.h"

//老板类
class Boss :public Worker
{
public:
	//构造函数
	Boss(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();
};
```

boss.cpp中代码如下：

```cpp
#include "boss.h"

//构造函数
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Boss::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：管理公司所有事务" << endl;
}

//获取岗位名称
string Boss::getDeptName()
{
	return string("老板");
}
```

### 6.5 测试多态

在职工管理系统.cpp中添加测试函数，并且运行能够产生多态

测试代码如下：

```cpp
//测试代码
void test01()
{
	Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->showInfo();
	delete worker;
}
```

测试结果：

![image-20211031112639745](https://img.wkeyu.cn/blog/paper/20211031112639.png)

## 7. 添加职工

**功能描述：** 批量添加职工，并且保存到文件中

### 7.1 功能分析

**分析:** 

用户在批量创建时,可能会创建不同种类的职工

如果想将所有不同种类的员工都放入到一个数组中,可以将所有员工的指针维护到一个数组里(利用多态:父类的指针指向子类的对象)

如果想在程序中维护这个不定长度的数组,可以将数组创建到堆区,并利用Worker **的指针维护

![image-20211031114021189](https://img.wkeyu.cn/blog/paper/20211031114021.png)

### 7.2 功能实现

在workerManager.h头文件中为WorkerManager类添加成员属性

**代码:**

```cpp
class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//析构函数
	~WorkerManager();

public:
	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

};
```

在workerManager构造函数中初始化属性

```cpp
WorkerManager::WorkerManager()
{
	//初始化属性
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;
}
```

在workerManager.h中添加 `void Add_Emp();`

```cpp
class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();
    
    //添加职工
	void Add_Emp();

	//析构函数
	~WorkerManager();

public:
	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

};
```

workerManager.cpp中实现`void Add_Emp();`

```cpp
//添加职工
void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工数量：";

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算添加新空间大小
		int newSize = this->m_EmpNum + addNum;//新空间人数=原有人数+添加人数

		//开辟新空间
		Worker** newSpace = new Worker * [newSize];

		//将原来空间下数据，拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;//职工编号
			string name;//职工姓名
			int dSelect;//部门选择

			cout << "请输入第" << i + 1 << "个新职工编号：";
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名：";
			cin >> name;
			cout << "1-普通职工" << "    2-经理" << "    3-老板" << endl;
			cout << "请选择该职工岗位：";
			cin >> dSelect;
			cout << endl;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case1:
				worker = new Employee(id, name, 1);
				break;
			case2:
				worker = new Manager(id, name, 2);
				break;
			case3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			//将创建的职工指针，保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_EmpNum = newSize;

		//提示添加成功
		cout << "成功添加" << addNum << "名新员工！" << endl;
	}
	else
	{
		cout << "输入错误，请重新输入！" << endl;
	}

	system("pause");
	system("cls");
}

//堆区内存在析构函数中手动释放
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
```

### 7.3 增加职工功能测试

![image-20211031160347661](https://img.wkeyu.cn/blog/paper/20211031160347.png)

## 8. 文件交互——写文件

**功能描述:** 对文件进行读写

​	在上一个添加功能中,我们只是将所有的数据添加到了内存中,一旦程序结束就无法保存了

​	因此文件管理类中需要一个与文件进行交互的功能,对于文件进行读写操作

### 8.1 设定文件路径

首先我们将文件路径,在workerManager.h中添加宏常量,并且包含头文件fstream

```cpp
#include<fstream>
#define FILENAME "empFile.txt"
```

### 8.2 成员函数声明

在workerManager.h中类里添加成员函数`void save();`

```cpp
//保存文件
void save();
```

### 8.3 保存文件功能及实现

在workerManager.cpp中实现`void save();`

```cpp
//保存文件
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);	//用输出的方式打开文件--写文件

	//将每个人的数据写入到文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	//关闭文件
	ofs.close();
}
```

### 8.4 保存文件功能测试

在添加职工功能中添加保存文件函数

![image-20211031161525496](https://img.wkeyu.cn/blog/paper/20211031161525.png)

![image-20211031161327850](https://img.wkeyu.cn/blog/paper/20211031161327.png)

### 9. 文件交互——读文件

**功能描述:** 将文件中的内容读取到程序中

虽然我们实现了添加职工后保存到文件的操作,但是每次开始运行程序,并没有将文件中的数据读取到程序中

而我们的程序功能中还有清空文件的需求

----

因此构造函数初始化数据的清空分为三种

1. 第一次使用,文件未创建
2. 文件存在,但是数据被用户清空
3. 文件存在,并且保存职工的所有数据

### 9.1 文件未创建

在workerManager.h中添加新的成员属性 m_FileIsEmpty标志文件是否为空

```cpp
//判断文件是否为空 标志
bool m_FileIsEmpty;
```

修改workerManager.cpp中构造函数代码

```cpp
WorkerManager::WorkerManager()
{
	//1. 文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//读文件

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化属性
		this->m_EmpNum = 0;//初始化记录人数
		this->m_EmpArray = NULL;//初始化数组指针
		this->m_FileIsEmpty = true;//初始化文件是否为空
		ifs.close();
		return;
	}
}
```

### 9.2 文件存在且数据为空

在workerManager.cpp中的构造函数追加代码：

```cpp
//2. 文件存在，数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//文件为空
		cout << "文件为空！" << endl;
		//初始化属性
		this->m_EmpNum = 0;//初始化记录人数
		this->m_EmpArray = NULL;//初始化数组指针
		this->m_FileIsEmpty = true;//初始化文件是否为空
		ifs.close();
		return;
	}
```

我们发现文件不存在或者文件数据为空时m_FileIsEmpty(判断文件是否为空的标志)都为真，那何时为假？

成功添加职工后，应该更改文件不为空的标志

在`void WorkerManager::Add_Emp()`成员函数中添加：

```cpp
//更新职工不为空标志
this->m_FileIsEmpty = false;
```

### 9.3 文件存在且保存职工数据

#### 9.3.1 获取记录的职工人数

在workerManager.h中添加成员函数`int get_EmpNum();`

```cpp
//统计文件中人数
int get_EmpNum();
```

workerManager.cpp中实现`int get_EmpNum();`

```cpp
//统计文件中人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//打开文件

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		//统计人数变量
		num++;
	}
	ifs.close();

	return num;
} 
```

构造函数追加第三种情况的代码：

```cpp
//3. 文件存在，并且有数据
	int num = this->get_EmpNum();
	cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;
```

测试：

![image-20211031165316166](https://img.wkeyu.cn/blog/paper/20211031165316.png)
![image-20211031165248317](https://img.wkeyu.cn/blog/paper/20211031165248.png)

### 9.3.2 初始化数组

根据职工的数据，初始化workerManager中的Worker** m_EmpArray指针

在WorkerManager.h中添加成员函数`void init_Emp()`

```cpp
//初始化员工
void init_Emp();
```

在workerManager.cpp中实现`init_Emp()`

```cpp
//初始化员工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//将文件数据读到变量中
	int id;
	string name;
	int dId;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;

		if (dId == 1)//普通员工
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)//经理
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)//老板
		{
			worker = new Boss(id, name, dId);
		}

		this->m_EmpArray[index] = worker;
		index++;
	}

	//关闭文件
	ifs.close();
}
```

在workerManager.cpp构造函数中追加代码

```cpp
//3. 文件存在，并且有数据
	int num = this->get_EmpNum();
	cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件中的数据，存到数组中
	this->init_Emp();
}
```

测试：

```cpp
//测试代码
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "职工编号：" << this->m_EmpArray[i]->m_Id
			<< "姓名：" << this->m_EmpArray[i]->m_Name
			<< "部门编号：" << this->m_EmpArray[i]->m_DeptId << endl;
	}
```

![image-20211031171111200](https://img.wkeyu.cn/blog/paper/20211031171111.png)

### 10. 显示员工

**功能描述：** 显示当前所有职工信息

### 10.1 显示职工函数声明

在workerManager.h中添加成员函数`void Show_Emp()`

```cpp
//显示职工
void Show_Emp();
```

### 10.2 显示职工函数实现

在workerManager.cpp中实现成员函数`void Show_Emp()`

```cpp
 //显示职工
void WorkerManager::Show_Emp()
{
	//判断文件是否为空
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件内容为空！" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//利用多态调用程序接口
			this->m_EmpArray[i]->showInfo();
		}
	}

	//按任意键后清屏
	system("pause");
	system("cls");
}
```

 ### 10.3 测试显示职工

 在职工管理系统.cpp里的`main`函数中分支2中，调用显示职工接口

```cpp
case 2:	//显示职工
	wm.Show_Emp();
	break;
```

![image-20211031172142768](https://img.wkeyu.cn/blog/paper/20211031172142.png)

## 11. 删除职工

**功能描述：** 按照职工编号进行删除职工操作

### 11.1 删除职工函数声明

在workerManager.h中添加成员函数`void Del_Emp()s;

```cpp
//删除职工
void Del_Emp();
```

### 11.2 职工是否存在函数声明

很多功能都需要用到根据职工是否存在来进行操作，如：删除职工、修改职工、查找职工

因此添加该公告函数，以便后续调用

在workerManager.h中添加成员函数`int IsExist(int id);`

```cpp
//判断职工是否存在	存在返回职工所在数组的位置，不存在返回-1
int IsExist(int id);
```

### 11.3 职工是否存在函数实现

在workerManager.cpp中实现成员函数`int IsExist(int id);`

```cpp
//判断职工是否存在	存在返回职工所在数组的位置，不存在返回-1
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id=id)
		{
			//找到职工
			index = i;

			break;
		}	
	}
    
    return index;
}
```

### 11.4 删除职工函数实现

在workerManager.cpp中实现成员函数`void Del_Emp();`

```cpp
//删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		//按照职工编号进行删除
		cout << "请输入想要删除的职工编号：";

		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)//说明职工存在，并且要删除掉index位置上的职工
		{
			//数组中删除元素，本质是数据前移
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}

			//更新数组中记录人数
			this->m_EmpNum--;

			//数据同步更新到文件中
			this->save();

			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工！" << endl;
		}
	}

	//按任意键 清屏
	system("pause");
	system("cls");
}
```

 ### 11.5 测试删除职工

 在职工管理系统.cpp里的`main`函数中分支3中，调用删除职工接口

```cpp
case 3:	//删除职工
	wm.Del_Emp();
	break;
```

未删除前的情况：

![image-20211031174725948](https://img.wkeyu.cn/blog/paper/20211031174726.png)

调用删除功能：

![image-20211031174804734](https://img.wkeyu.cn/blog/paper/20211031174804.png)

删除后：
![image-20211031174817774](https://img.wkeyu.cn/blog/paper/20211031174817.png)
查看文件内容，再次核实员工已经被完全删除：
![image-20211031174851623](https://img.wkeyu.cn/blog/paper/20211031190225.png)

## 12. 修改职工

**功能描述：** 能够按照职工的编号对职工信息进行修改并保存

### 12.1 修改职工函数声明

在workerManager.h中添加成员函数`void Mod_Emp();`

```cpp
//修改职工
void Mod_Emp();
```

### 12.2 修改职工函数的实现

在workerManager.cpp中实现成员函数`void Mod_Emp();`

```cpp
//修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入修改职工的编号：";
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != 1)
		{
			//查找到编号的职工

			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到：" << id << "号职工，请输入新职工号：";
			cin >> newId;

			cout << "请输入新姓名：" << endl;
			cin >> newName;


			cout << "1.普通员工\t2.经理\t3.老板" << endl;
			cout << "请输入岗位：";
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			//更新数据到 数组中
			this->m_EmpArray[ret] = worker;

			cout << "修改成功！" << endl;

			//保存到文件中
			this->save;
		}
		else
		{
			cout << "修改失败，查无此人！" << endl;
		}
	}

	//按任意键清屏
	system("pause");
	system("cls");
}
```

### 12.3 测试修改函数

 在职工管理系统.cpp里的`main`函数中分支4中，调用修改职工接口

```cpp
case 4:	//修改职工
	wm.Mod_Emp();
	break;
```

修改前：

![image-20211031192110666](https://img.wkeyu.cn/blog/paper/20211031192110.png)

调用修改函数时：

![image-20211031192340882](https://img.wkeyu.cn/blog/paper/20211031192340.png)

修改后：

![image-20211031192357303](https://img.wkeyu.cn/blog/paper/20211031192357.png)

查看对应文件，确定是否完全修改:
![image-20211031192431629](https://img.wkeyu.cn/blog/paper/20211031192431.png)

## 13. 查找职工

**功能描述：** 提供两种查找职工方式，一种按照职工编号，一种按照职工姓名

### 13.1 查找职工函数声明

在workerManager.h中添加成员函数`void Search_Emp();`

```cpp
//查找职工
void Search_Emp();
```

### 13.2 查找职工函数实现

在workerManager.cpp中实现成员函数`void Search_Emp();`

```cpp
//查找职工
void WorkerManager::Search_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件记录为空！" << endl;
	}
	else
	{
		cout << "1.按职工编号查找\t2.按职工姓名查找";
		cout << "请输入查找方式：" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)
		{
			//按照编号查找
			int id;
			cout << "请输入查找的职工编号：";
			cin >> id;

			int ret = this->IsExist(id);

			if (ret != -1)
			{
				//找到职工
				cout << "查找成功！，该职工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			//按照姓名查找
			string name;
			cout << "请输入查找的姓名：";
			cin >> name;

			//加入判断是否查到的标志
			bool flag = false;//默认未找到

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					flag = true;

					cout << "查找成功，该职工信息如下：" << endl;
					//调用显示信息接口
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人！" << endl;
			}

		}
		else
		{
			cout << "输入选项有误！" << endl;
		}

	}

	system("pause");
	system("cls");
}
```

### 13.3 测试查找职工函数

在职工管理系统.cpp里的`main`函数中分支5中，调用查找职工接口

```cpp
case 5:	//查找职工
	wm.Search_Emp();
```

1. 按职工编号查找：

   ![image-20211031194655960](https://img.wkeyu.cn/blog/paper/20211031194656.png)

2. 按职工姓名查找：

   ![image-20211031194724117](https://img.wkeyu.cn/blog/paper/20211031194724.png)

## 14. 排序

**功能描述：** 按照职工编号进行排序，排序的顺序由用户指定

### 14.1 排序函数声明

在workerManager.h中添加成员函数`void Sort_Emp();`

```cpp
//按照职工编号排序
void Sort_Emp();
```

### 14.2 排序函数实现

在workerManager.cpp中实现成员函数`void Sort_Emp();`

```cpp
//按照职工编号排序
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或文件记录为空！" << endl;
		
		system("pause");
		system("cls");
	}
	else
	{
		cout << "1. 按照职工编号进行升序排序\t2.按照职工编号进行降序排列" << endl;
		cout << "请选择排序方式：";
		int select = 0;
		cin >> select;

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrMax = i;//声明最小值或最大值下标
			for (int j = i+1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//升序
				{
					if (this->m_EmpArray[minOrMax]->m_Id>this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else//降序
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			//判断一开始的最小值或最大值 是不是计算的最小值或最大值
			//如果不是 交换数据
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
			
		}
		//排序后结果保存到文件中
		this->save();

		cout << "排序成功！排序后的结果未：" << endl;
		this->Show_Emp();
	}
}
```

### 14.3 测试排序函数

在职工管理系统.cpp里的`main`函数中分支6中，调用职工排序接口

```cpp
case 5:	//查找职工
	wm.Search_Emp();
```

1. 升序排序：

   ![image-20211031200345346](https://img.wkeyu.cn/blog/paper/20211031200345.png)

2. 降序排序：

   ![](https://img.wkeyu.cn/blog/paper/20211031200530.png)

3. 查看文件，确认是否保存到文件中：
![image-20211031200606660](https://img.wkeyu.cn/blog/paper/20211031200606.png)

## 15. 清空文件

**功能描述：** 将文件中记录数据清空

### 15.1 清空函数声明

在workerManager.h中添加成员函数`void Clean_File();`

```cpp
//清空文件
void Clean_File();
```

### 15.2 清空函数实现

在workerManager.cpp中实现成员函数`void Clean_File();`

```cpp
//清空文件
void WorkerManager::Clean_File()
{
	cout << "是否确定清空？" << endl;
	cout << "1.确定\t2.返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//清空文件
		ofstream ofs(FILENAME, ios::trunc);//删除文件后重新创建
		ofs.close();

		//删除堆区的每个职工对象
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			//删除堆区数组指针
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功！" << endl;
	}
 
	system("pause");
	system("cls");
}
```

### 15.3 测试清空文件

在职工管理系统.cpp里的`main`函数中分支7中，调用清空文件接口

```cpp
case 7:	//清空文档
	wm.Clean_File();
```

执行清空功能：

![image-20211031203110058](https://img.wkeyu.cn/blog/paper/20211031203110.png)

查看文件是否被清空：
![](https://img.wkeyu.cn/blog/paper/20211031203157.png)

**至此，职工管理系统全部功能基本完全实现！**
