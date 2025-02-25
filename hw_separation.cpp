#include "OAfiles.h"
#include "main.h"
#include "evenOddNum.h"
#include "swapFiles.h"

#include <iostream>

using namespace std;

void showText() {
	cout << "Яке завдання ви хотіли би відкрити?\n1 - Перезапис слів з першою буквою о або а\n2 - Перезапис парних та непарних чисел по окремим файлам\n3 - Поміняти файли місцями\nq - вийти\nВаш вибір: ";
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
		default: cout << "Такого варіанту немає\n"; break;
		}
	}
	cout << "Бувайте!";
	return 0;
}
