#pragma once
#include "Computer.h"
using namespace std;


int main()//������
{
	int choice = 0;
	char a[100];

	while (true)
	{
		show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳�ϵͳ
			exitSystem();
			break;
		case 1://ʹ���������������
			cout << "��������������ʽ�ӣ�" << endl;
			scanf_s("%s", a, 100);
			cout << "����Ľ���ǣ�" << endl;
			function(a);
			system("pause");
			system("cls");
			break;
		default:
			cout << "�������" << endl;
			cout << "����������" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}