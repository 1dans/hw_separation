#include "OAfiles.h"
#include "main.h"
#include "evenOddNum.h"
#include "swapFiles.h"

#include <iostream>

using namespace std;

void showText() {
	cout << "��� �������� �� ����� �� �������?\n1 - ��������� ��� � ������ ������ � ��� �\n2 - ��������� ������ �� �������� ����� �� ������� ������\n3 - ������� ����� ������\nq - �����\n��� ����: ";
}

int main()
{
    system("chcp 1251>null");
	showText();
	char task = ' ';
	while (task != 'q') {
		cin >> task;
		switch (task)
		{
		case '1': OAfiles(); break;
		case '2': evenOddNum(); break;
		case '3': swapFiles();  break;
		case 'q': break;
		default: cout << "������ ������� ����\n"; break;
		}
	}
	cout << "�������!";
	return 0;
}
