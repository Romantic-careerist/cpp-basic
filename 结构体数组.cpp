#include<iostream>
using namespace std;
#include<string>

//1.结构体定义
struct Student
{
	string name;
	int age;
	int score;

};

int main()
{
	//2.结构体数组定义
	//struct 结构体名 数组名[数组元素]={ {}，{}，{}，}；
	struct Student stuArray[3] =
	{
		{"张三",18,100,},
		{"李四",28,99},
		{"王五",38,66}

	};

	//3.给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		if (i < 1)
		{
			cout << "姓名\t" << "年龄\t" << "分数\t" << endl;
		}
		
		cout<< stuArray[i].name <<"\t"
			<< stuArray[i].age<<"\t"
			<< stuArray[i].score << endl;
	}


	cin.get();
	return 0;
}

