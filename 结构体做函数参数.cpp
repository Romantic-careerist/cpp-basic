#include<iostream>
using namespace std;

struct student
{
	string name=" ";
	int age=0;
	int score=0;
};

//打印学生信息函数
void printStudent1(struct student s)//值传递
{
	//s.age = 100;
	cout << "子函数" << s.name << s.age << s.score<<endl;
}

void printStudent2(const struct student* p)//地址传递，节省内存，不会生成新的副本
{
	//p->age = 200;//加入const只读不可写，防止误改
	cout << "地址函数" << p->name << p->age << p->score << endl;
}

int main()
{
	struct student s;
	s.name="张三";
	s.age = 20;
	s.score = 85;

	
	printStudent1(s);
	printStudent2(&s);
	cout << "main" << s.name << s.age << s.score << endl;

	
	cin.get();
	return 0;
}