#include<iostream>
using namespace std;

struct hero
{
	string name = " ";
	int age = 0;
	string sex = " ";
};

void agecompare(struct hero heroarr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroarr[j] .age > heroarr[j + 1].age)
			{
				struct hero temp = heroarr[j];
				heroarr[j] =heroarr[j + 1];
				heroarr[j + 1] = temp;

			}	
		}
	}
}

void Print(struct hero heroarr[], int len)
{
	for(int i=0;i<len;i++)
	{
		cout << heroarr[i].name << "\t"
			<< heroarr[i].age << "\t"
			<< heroarr[i].sex << endl;
	}
}


int main()
{
	struct hero heroarr[5] =
	{
		{"刘备",23,"男",},
		{"关羽",22,"男",},
		{"张飞",20,"男",},
		{"赵云",21,"男",},
		{"貂蝉",19,"女",},
	};

	int len = sizeof(heroarr) / sizeof(heroarr[0]);
	/*for (int i = 0; i < len; i++)
	{
		cout << "英雄：" <<heroarr[i].name
			<< " 年龄" <<heroarr[i].age
			<< " 性别" <<heroarr[i].sex<< endl;
	}*/

	//在函数中对数组进行排序
	agecompare(heroarr,len);

	//打印
	Print(heroarr, len);

	cin.get();
	return 0;
}