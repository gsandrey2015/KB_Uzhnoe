/**********************************************************************
��������, ������� �� ������ ������ A � n ���������� ������������� �����
A � n-��������� �������� �������������� ����.

http://informatics.mccme.ru/mod/statements/view3.php?id=595&chapterid=750#1
**********************************************************************/

#include<iostream>
using namespace std;
/*
����������� ������� ���������� � ��������� ����� 1.
���� ��������� ����� 1, �� ��� ����������� �� 1 �
����������� ������, �� ��� ��� ��������� �����.
*/
void add1(int n, int *mas)
{
	if (mas[n - 1] == 0)
		mas[n - 1] = 1;
	else
	{
		mas[n - 1] = 0;
		if (n > 2)
			add1(n - 1, mas);
	}
}

int main()
{
	int A;//������� �����
	int n;//���-�� ��������;
	int a;
	cin >> A;
	a = A;
	cin >> n;
	int mas[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	if (A < 0)
	{
		A *= -1;
		mas[0] = 1;
	}
	//�������� ������ ���
	for (int i = n - 1; i >= 0; i--)
	{
		if (A >= 1)
		{
			mas[i] = A % 2;
			A = A / 2;
		}
		else 
			A = 0;
	}
	if(a>0)//���� ����� �������������
		for (int i = 0; i < n; i++)
			cout << mas[i];
	else //���� ����� �������������, ��������� �������������� ���
	{
		int mas2[16] = { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
		//�������� �������� ���, ���������� ��� �������, ����� ������� (���������)
		for (int i = 1; i < n; i++)
		{
			if (mas[i] == 0)
				mas2[i] = 1;
			else
				mas2[i] = 0;
		}
		/*for (int i = 0; i < n; i++)
			cout << mas2[i];
		cout << endl;*/
		//��������� � ���������� 1 � �������� �������������� ���
		add1(n, mas2);
		for (int i = 0; i < n; i++)
			cout << mas2[i];
	}
	cout << endl; system("pause");
    return 0;
}
