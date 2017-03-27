/**********************************************************************
Программа, переводящая запись числа между двумя произвольными системами
счисления.

http://informatics.mccme.ru/mod/statements/view3.php?id=595&chapterid=749#1
**********************************************************************/

//#include "stdafx.h"
#include<iostream>

using namespace std;

int convertTo10(int, int*, int);//функция для перевода из любой системы в десятичную
void convert(int, unsigned long long int);//функция для перевода из десятичной системы в любую

int main()
{
	int n;//исходная система счисления
	char A[256];//вводимое число
	int k;//конечная система счисления
	int a[256];
	int i = 0;
	cin >> n;
	cin >> A;
	cin >> k;
	unsigned long long int j = 0;
	//ввод числа
	for (j = 0; j < 256; j++)
	{
		if (A[j] == '\0')
			break;
	}
	//перевод кодов символов в числа
	for (i = 0; i < j; i++)
	{
		if (A[i] >= 65)//кода A -- 65, B -- 66 ...
			a[i] = (A[i] - 55);
		else//код 0 -- 48, 1 -- 49
			a[i] = (A[i] - 48);
	}
	
	// переводим в 10-ю систему счисления
	j=convertTo10(n, a, j);
	//переводим из десятичной системы счисления в заданую
	if (k == 10)
		cout << j;
	else
	{
		convert(k, j);
	}
	system("pause");
    return 0;
}

/*
Функция для перевода в 10 систему.
Входные параметры:
n -- основание вводимой системы счисления
*А -- указатель на массив с введенным числом
j -- количество цифр в числе
Возвращает целое число в 10-й системе счисления
*/
int convertTo10(int n, int *A, int j)
{
	int t = 1;
	unsigned long long int a = 0;
	for (int i = j - 1; i >= 0; i--)
	{
		a += A[i] * t;
		t *= n;
	}
	return a;
}

/*
Функция для перевода из 10 системы в другую.
Входные параметры:
n -- основание системы счисления
А -- число в 10-й системе
Функция выводит на экран число в n-й системе счисления
*/
void convert(int n, unsigned long long int A)
{
	char c='A';
	//wchar_t c = L'A';
	int nc;
	nc = c;
	//cout << c;
	int unsigned long long mas[256];
	int k = 0;
	do {
		mas[k++] = A%n;
		A = A / n;
	} while (A > 0);
	for (int i = k-1; i >=0; i--)
	{
		if (mas[i] >= 10)
		{
			c += (mas[i] - 10);
			cout << c;
		}
		else
			cout << mas[i];
	}
}

