#include "OAfiles.h"
#include "main.h"
#include "evenOddNum.h"

#include <iostream>

using namespace std;


int main()
{
    system("chcp 1251>null");
	cout << "Яке завдання ви хотіли би відкрити?\n1 - Перезапис слів з першою буквою о або а\n2 - Перезапис парних та непарних чисел по окремим файлам\n3 - Поміняти файли місцями\nq - вийти\nВаш вибір: ";
	char task;
	do {
		cin >> task;
		switch (task)
		{
		case '1': OAfiles(); break;
		case '2': evenOddNum(); break;
		case '3': break;
		case 'q': cout << "Бувайте!"; break;
		default: cout << "Такого варіанту немає.\n"; break;
		}
	} while (task!='q');
	return 0;
}
