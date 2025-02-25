#include "OAfiles.h"
#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251>null");
	cout << "яке завданн€ ви хот≥ли би в≥дкрити?\n1 - ѕерезапис сл≥в з першою буквою о або а\n 2 - ѕерезапис парних та непарних чисел по окремим файлам\n 3 - ѕом≥н€ти файли м≥сц€ми\n";
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
