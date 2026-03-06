#include<iostream>
#include<string>//C++风格字符串

using namespace std;

int main() {

	//字符串
	//C风格定义：char 变量名[]="";
	char str[] = "hello world";
	cout << str << endl;
	cout << "为字符串str赋值" << endl;
		//cin >> str;能用，但对于字符数组的输入也有限制，它只能读取到第一个空格之前的内容
		cin.ignore(); // 忽略上一次输入留下的换行符
		cin.getline(str, 100); // 使用getline读取整行输入，包括空格
		bool flag = strlen(str) > 0; // 使用strlen检查字符串是否非空
		cout << flag << endl;
		cout << "字符串str=" << str << endl;

	//C++风格定义：string 变量名="";//且要补充头文件<string>
	string str2 = "hello world";
	cout << str2 << endl;
	cout << "为字符串str2赋值" << endl;
		//根据字符串的内容来设置布尔值：
		getline(cin, str2);//getline读取整行输入，包括空格
		bool flag = !str2.empty();//empty（）方法检查字符串是否非空
		cout << flag << endl;
		cout << "字符串str2=" << str2 << endl;
	
	
	/*bool type//1字节
	bool flag = true;//1
	cout << flag << endl;
	cout << "为flag重新赋值" << endl;
	cin >> flag;//除了数字和两个单词，其余会错误。
	cout << "flag=" << flag << endl;

	//flag = false;//0为假，非零都是真
	//cout << flag << endl;
	
	cout << "sizeof bool=" << sizeof(bool) << endl;
	*/

	system("pause");

	return 0;
}