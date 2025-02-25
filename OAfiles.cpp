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
		cout << "������� �������� � ��������� �����\n";
		return;
	}
	fstream fileR("task1Result.txt", ios::out);
	if (!fileR)
	{
		cout << "������� �������� � ��������� �����\n";
		return;
	}
	char word[100];
	while (fileS >> word)
	{
		word[0] = tolower(word[0]);
		if (word[0] == '�' || word[0] == '�' || word[0] == 'a' || word[0] == 'o' || word[0] == '�' || word[0] == '�') fileR << word << " ";
		
	}
	fileS.close();
	fileR.close();
	cout << "�������� ��������\n";
	main();
}
