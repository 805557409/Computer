#pragma once
#include "Computer.h"
using namespace std;


int main()//主函数
{
	int choice = 0;
	char a[100];

	while (true)
	{
		show_Menu();
		cout << "请输入您的选择" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			exitSystem();
			break;
		case 1://使用四则运算计算器
			cout << "请输入您想计算的式子：" << endl;
			scanf_s("%s", a, 100);
			cout << "计算的结果是：" << endl;
			function(a);
			system("pause");
			system("cls");
			break;
		default:
			cout << "输入错误" << endl;
			cout << "请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}