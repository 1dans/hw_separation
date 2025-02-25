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
		cout << "Помилка відкриття файлу odd.txt\n";
		return;
	}

	if (!even) {
		cout << "Помилка відкриття файлу even.txt\n";
		return;
	}

	if (!source) {
		cout << "Помилка відкриття файлу task2Source.txt\n";
		return;
	}

	while (source >> num) {
		if (num == 0) cout << "У файлі було число 0. Пропущено\n";
		else if (num % 2 == 0) even << num << endl;
		else odd << num << endl;
	}

	source.close();
	odd.close();
	even.close();
	cout << "Числа розділені на парні й непарні і записані в файли even.txt та odd.txt\n";
	showText();
}
