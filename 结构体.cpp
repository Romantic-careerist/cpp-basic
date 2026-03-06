#include<iostream>
using namespace std;

//定义结构体（自定义数据类型）：strut 结构体名 {结构体成员列表}
struct Student
{
	//成员列表

	//姓名:字符串型
	string name;
	//年龄
	int age;
	//分数
	int score;

}s3;//顺便创建结构体变量


int main()
{
	/*创建结构体变量//三种方法的struct关键字都可省略
	通过学生类型创建具体学生
	//1.struct Student s1//结构体名 变量名
	//2.struct Student s2={.....}
	//3.定义结构体时顺便创建结构体变量s3
	*/
	
	Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年龄: " << s1.age << "分数：" << s1.score << endl;

	struct Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "年龄: " << s2.age << "分数：" << s2.score << endl;

	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << "年龄: " << s3.age << "分数：" << s3.score << endl;

	cin.get();
	return 0;
}