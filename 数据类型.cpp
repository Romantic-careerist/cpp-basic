#include<iostream>
using namespace std;

int main() {
	/*1.整形
	short num1 = 32768;//短整型2字节-2^15-2^15-1//-32768~32767
	
	int num2 = 10;//整形4字节2^31
	cout << "num2=" << num2 << endl;
	cout << "请重新赋值num2" << endl;
	cin >> num2;
	cout << "num2=" << num2 << endl;

	long num3 = 10;//长整型8字节（64），4字节（windows,linux)2^31

	long long num4 = 10;//长长整形8字节2^63

	cout << "num1=" << num1 << endl;
	
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	
	//sizeof统计数据类型占用内存大小：sizeof(数据类型/变量）
	cout << "short占用内存空间为：" << sizeof(short) << endl;
	cout << "short占用内存空间为：" << sizeof(num2) << endl;
	*/

	//2.实型//浮点型
	//float单精度型4字节float f1=3.14f
	//double双精度八字节double d1=3.14
	float f1 = 3.14f;
	cout << "f1" << f1 << endl;
	cout << "请重新赋值f1" << endl;
	cin >> f1;
	cout << "f1=" << f1 << endl;

	float f2 = 3e2;//3*10^2//科学计数法
	cout << "f2= " << f2 << endl;
	
	float f3 = 3e-2;//3*0.1^2
	cout << "f3= " << f3 << endl;
	

	/*3.字符型
	char ch = 'a';//创建方式
	cout << ch << endl;

	cout << "char字符型变量所占内存： " << sizeof(char) << endl;

	//char ch2 = "b";//不可使用“”
	//char ch2 = 'abcde';//只能有一个字符

	cout << (int)ch << endl;//ASCII编码值，强制类型转换
	//a-97;A-65
	*/

	/*4.转义字符
	cout << "hello world\n";//换行符\n

	cout << "\\" << endl;//第一个\提示要输入第二个\这个特殊字符

	cout << "aaaa\thelloworld" << endl;//水平制表符\t//补齐八位
	cout << "aa\thelloworld" << endl;//作用——整齐好看
	cout << "aaaaaa\thelloworld" << endl;
	*/

	system("pause");

	return 0;
}