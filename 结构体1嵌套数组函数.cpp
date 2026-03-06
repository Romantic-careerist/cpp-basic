#include<iostream>
using namespace std;
#include <string>
#include<ctime>

struct Student
{
	string Name = " ";
	int score = 0;
};

struct teacher
{
	string tName = " ";
	Student sarr[5] = {};//通过结构体struct创建学生数组
};

void allocateSpace(teacher tarr[], int len)
{
	string nameSeed = "ABCDE";//字符串-char数组
		//给老师赋值
		for (int i = 0; i < len; i++)
		{
			tarr[i].tName = "Teacher_";
			tarr[i].tName += nameSeed[i];//给名字后追加字符串索引对应的字符
		
			//给每名老师所带的学生赋值
			for (int j = 0; j < 5; j++)
			{
				tarr[i].sarr[j].Name = "Student_";
				tarr[i].sarr[j].Name += nameSeed[j];

				//随机数公式 int random = min + (rand()%max-min+1);//min=40
				int random = rand() % 61 + 40;
				tarr[i].sarr[j].score = random;
			}

		}

}

void printInfo(teacher tarr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名:\t" << i<<tarr[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：\t" << j <<tarr[i].sarr[j].Name << "\t" 
				<<"考试分数：\t" << tarr[i].sarr[j].score << endl;
		}

	}

}

int main()
{
	srand((unsigned int)time(NULL));//随机种子

	struct teacher tarr[3];//创建三名老师的数组

	//通过函数给老师和学生赴值
	int len = sizeof(tarr) / sizeof(tarr[0]);
	allocateSpace(tarr, len);

	//打印老师和学生信息
	printInfo(tarr, len);


	cin.get();
	return 0;
}