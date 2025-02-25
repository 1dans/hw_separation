#include "swapFiles.h"
#include "main.h"
#include <iostream>
#include <fstream>

using namespace std;

void swapFiles()
{
	fstream file1R, file2R, swapR, file1W, file2W, swapW;

	file1R.open("task3File1.txt", ios::in || ios::trunc);
	swapW.open("task3Swap.txt",  ios::out);

	if (!file1R)
	{
		cout << "‘айл task3File1.txt не знайдено\n";
		return;
	}
	if (!swapW)
	{
		cout << "‘айл task3Swap.txt не знайдено\n";
		return;
	}

	char ch;
	
	while (file1R>>ch) swapW << ch << ' ';

	file1R.close();
	swapW.close();

	file2R.open("task3File2.txt", ios::in || ios::trunc);
	file1W.open("task3File1.txt", ios::out);

	if (!file2R)
	{
		cout << "‘айл task3File2.txt не знайдено\n";
		return;
	}
	if (!file1W)
	{
		cout << "‘айл task3File1.txt не знайдено\n";
		return;
	}

	while (file2R >> ch) file1W << ch << ' ';

	file2R.close();
	file1W.close();

	swapR.open("task3Swap.txt", ios::in);
	file2W.open("task3File2.txt", ios::out);
	if (!swapR)
	{
		cout << "‘айл task3Swap.txt не знайдено\n";
		return;
	}
	if (!file2W)
	{
		cout << "‘айл task3File2.txt не знайдено\n";
		return;
	}

	while (swapR >> ch) file2W << ch << ' ';

	swapR.close();
	file2W.close();

	cout << "‘айли були пом≥н€н≥ м≥сц€ми\n";
	showText();
}
