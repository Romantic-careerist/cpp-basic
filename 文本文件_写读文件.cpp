#include<iostream>
using namespace std;
#include<fstream>//1.包含头文件
#include<string>

void test01()
{
	//写文件步骤如下:----------
	//2.创建流对象
	ofstream ofs;
	//3.打开文件:（"文件路径/文件名",打开方式）
	ofs.open("text.txt", ios::out);
	//4.写内容
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	//5.关闭文件
	ofs.close();

}

void test02()//读文件步骤
{
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件 并判断是否成功
	ifs.open("text.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
		//若不返回继续执行会访问无效文件程序崩溃进入死循环
	}
	//4.读内容
	//第一种
	//定义长1024字节的字符数组
	//buf[0] = 1(第一个元素是1） 其余都被初始化为0
	//char buf[1024] = { 1 }; 
	//while (ifs >> buf)//把ifs放入buf
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//getline获取行（地址，最多读取字节长度） 可读出空格
	//buf可代表第一个字符地址
	/*while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//第三种
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//第四种
	char c;
	while ((c = ifs.get()) != EOF)//end of file
	{
		cout << c;
	}
	
	//5.关闭文件
	ifs.close();
}
int main()
{
	//test01();
	test02();

	cin.get();
	return 0;
}