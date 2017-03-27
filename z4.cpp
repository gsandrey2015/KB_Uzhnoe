/**********************************************************************
���������, ����������� ������ ����� ����� ����� ������������� ���������
���������.

http://informatics.mccme.ru/mod/statements/view3.php?id=595&chapterid=749#1
**********************************************************************/

//#include "stdafx.h"
#include<iostream>

using namespace std;

int convertTo10(int, int*, int);//������� ��� �������� �� ����� ������� � ����������
void convert(int, unsigned long long int);//������� ��� �������� �� ���������� ������� � �����

int main()
{
	int n;//�������� ������� ���������
	char A[256];//�������� �����
	int k;//�������� ������� ���������
	int a[256];
	int i = 0;
	cin >> n;
	cin >> A;
	cin >> k;
	unsigned long long int j = 0;
	//���� �����
	for (j = 0; j < 256; j++)
	{
		if (A[j] == '\0')
			break;
	}
	//������� ����� �������� � �����
	for (i = 0; i < j; i++)
	{
		if (A[i] >= 65)//���� A -- 65, B -- 66 ...
			a[i] = (A[i] - 55);
		else//��� 0 -- 48, 1 -- 49
			a[i] = (A[i] - 48);
	}
	
	// ��������� � 10-� ������� ���������
	j=convertTo10(n, a, j);
	//��������� �� ���������� ������� ��������� � �������
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
������� ��� �������� � 10 �������.
������� ���������:
n -- ��������� �������� ������� ���������
*� -- ��������� �� ������ � ��������� ������
j -- ���������� ���� � �����
���������� ����� ����� � 10-� ������� ���������
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
������� ��� �������� �� 10 ������� � ������.
������� ���������:
n -- ��������� ������� ���������
� -- ����� � 10-� �������
������� ������� �� ����� ����� � n-� ������� ���������
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

