#include "OAfiles.h"
#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251>null");
	cout << "��� �������� �� ����� �� �������?\n1 - ��������� ��� � ������ ������ � ��� �\n 2 - ��������� ������ �� �������� ����� �� ������� ������\n 3 - ������� ����� ������\n";
	int task;
	cin >> task;
	switch (task)
	{
	case 1:	OAfiles(); break;
	case 2: break;
	case 3: break;
	default: break;
	}
	return 0;
}
