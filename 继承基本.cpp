#include<iostream>
using namespace std;

class BasePage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...." << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、战雷地图...." << endl;
	}
	void left()
	{
		cout << "Java、Pathon、C++...." << endl;
	}
};

//Java页面
class Java :public BasePage//继承语法：class 子类：继承方式 父类
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//Python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

//C++页面
class Cpp :public BasePage
{
public:
	void content()
	{
		cout << "Cpp学科视频" << endl;
	}
};

void test01()
{
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------------------" << endl;
	cout << "Cpp下载视频页面如下：" << endl;
	Cpp cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();

}

int main()
{
	test01();

	cin.get();
	return 0;
}