#include "evenOddNum.h"
#include "main.h"
#include <iostream>
#include <fstream>

using namespace std;

void evenOddNum()
{
	int num;
	fstream even("even.txt", ios::out);
	fstream odd("odd.txt", ios::out);
	fstream source("task2Source.txt", ios::in);
	if (!odd) {
		cout << "������� �������� ����� odd.txt\n";
		return;
	}

	if (!even) {
		cout << "������� �������� ����� even.txt\n";
		return;
	}

	if (!source) {
		cout << "������� �������� ����� task2Source.txt\n";
		return;
	}

	while (source >> num) {
		if (num == 0) cout << "� ���� ���� ����� 0. ���������\n";
		else if (num % 2 == 0) even << num << endl;
		else odd << num << endl;
	}

	source.close();
	odd.close();
	even.close();
	cout << "����� ������� �� ���� � ������ � ������� � ����� even.txt �� odd.txt\n";
	showText();
}
