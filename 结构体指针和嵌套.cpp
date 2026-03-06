#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name=" ";
	int age=0;
	int score=0;
};
struct teacher//定义老师结构体
{
	int id = 0;
	string name=" ";
	int age = 0;
	struct student stu = {};//struct可省略，stu是通过student结构体声明的变量
};



int main()
{
	//1.创建学生结构体比变量
	struct student s={"张三",18,100};//struct可省
	//2.通过指针指向结构体变量
	//int* p = &s;int*和struct student*类型不兼容
	struct student* p = &s;//struct可省
	//3.通过指针访问结构体变量的数据
	cout << "姓名：" << p->name
		<< " 年龄：" << p->age
		<< " 成绩：" << p->score << endl;

	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名: " << t.name << "老师编号：" << t.id << "老师年龄：" << t.age
		<< "老师学生姓名：" << t.stu.name << "学生年龄：" << t.stu.age << "学生分数：" << t.stu.score << endl;

	cin.get();
	return 0;

}