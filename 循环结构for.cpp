#include<iostream>
using namespace std;

int main()
{
	/*int i = 0;
	for (; i < 10; i++)
	{
		cout << i << endl;
	}
	*/

	//ÇÃ×À×Ó
	/*
	for (int a = 1; a < 101; a++)
	{
		if (a % 7 == 0) {
			cout << "ÇÃ×À×Ó" << endl;
			}else if(a%10==7){
			cout << "ÇÃ×À×Ó" << endl;
			}else if (a / 10 == 7) {
			cout << "ÇÃ×À×Ó" << endl;
			}else {
			cout << a << endl;
		}
	}*/

	//Ç¶Ì×Óï¾ä´òÓ¡*Í¼
	/*for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
			if (b < 9) {
				cout << "* ";
			}
			else {
				cout << "*" << endl;
			}
		//cout<<endl;//Ö±½Ó»»ÐÐ
	}*/

	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b < a + 1; b++)
		{
			int c = a * b;
			cout << a << "*" << b << "=" << c<<" ";
		}
		cout << endl;
	}
		





	system("pause");
	return 0;
}