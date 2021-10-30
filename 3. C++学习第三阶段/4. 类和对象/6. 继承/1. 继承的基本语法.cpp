#include<iostream>
#include<string>
using namespace std;

//普通实现页面
//java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++（公共侧边）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//	 
//};

//继承实现页面
//公共页面
class Basepage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++（公共侧边）" << endl;
	}
};

//java页面
class java : public Basepage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//python页面
class python :public Basepage
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};
//c++页面
class cpp :public Basepage
{
public:
	void content()
	{
		cout << "cpp学科视频" << endl;
	}
};

void test01()
{
	cout << "Java下载视频页面如下：" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}
int main()
{
	test01();

	return 0;
}