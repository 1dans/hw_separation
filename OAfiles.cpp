#include "OAfiles.h"
#include "main.h"
#include <iostream>
#include <fstream>

using namespace std;

void OAfiles()
{
	fstream fileS("task1Source.txt", ios::in);
	if (!fileS)
	{
		cout << "Виникли проблеми з відкриттям файлу\n";
		return;
	}
	fstream fileR("task1Result.txt", ios::out);
	if (!fileR)
	{
		cout << "Виникли проблеми з відкриттям файлу\n";
		return;
	}
	char word[100];
	while (fileS >> word)
	{
		word[0] = tolower(word[0]);
		if (word[0] == 'а' || word[0] == 'о' || word[0] == 'a' || word[0] == 'o' || word[0] == 'О' || word[0] == 'А') fileR << word << " ";
		
	}
	fileS.close();
	fileR.close();
	cout << "Завдання виконано\n";
	main();
}
