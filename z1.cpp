/**********************************************************************
���������, ������� ������� � ������� ������������ ������������� �������
��� ������� ����� -1, ���� �� ���� ������� �� �����������.

http://informatics.mccme.ru/mod/statements/view3.php?id=11248&chapterid=112318#1
**********************************************************************/

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int k;//���������� ���������� � �������
	cin >> k;
	int *input_mas = new int[k];
	int max_p = -1;//���������� ��� �������� ����. ����. ��������
	for (int i = 0; i < k; i++)
	{
		cin >> input_mas[i];
		for (int k = 0; k < i; k++)
		{

			if ((input_mas[k] > max_p) && (input_mas[k] == input_mas[i]))
				max_p = input_mas[k];
		}
	}
	cout << max_p;
	system("pause");
	return 0;
}

