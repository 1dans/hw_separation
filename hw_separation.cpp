#include "OAfiles.h"
#include "main.h"
#include "evenOddNum.h"

#include <iostream>

using namespace std;


int main()
{
    system("chcp 1251>null");
	cout << "��� �������� �� ����� �� �������?\n1 - ��������� ��� � ������ ������ � ��� �\n2 - ��������� ������ �� �������� ����� �� ������� ������\n3 - ������� ����� ������\nq - �����\n��� ����: ";
	char task;
	do {
		cin >> task;
		switch (task)
		{
		case '1': OAfiles(); break;
		case '2': evenOddNum(); break;
		case '3': break;
		case 'q': cout << "�������!"; break;
		default: cout << "������ ������� ����.\n"; break;
		}
	} while (task!='q');
	return 0;
}
