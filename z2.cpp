/**********************************************************************
���������, ������� ������� ������� ���� �������� ����� �������.

http://informatics.mccme.ru/mod/statements/view3.php?id=11404&chapterid=112371#1
**********************************************************************/

//#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int k = 0;//���������� �����, ��������. �������
	int N, M;//���-�� ����� � ��������
	int min, max;
	cin >> N;
	cin >> M;
	int matr[256][256];
	
	//���� �������
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> matr[i][j];
	//����� ������������ �������� � ������
	for (int i = 0; i < N; i++)
	{
		int min_n = -1;//������ ������������
		min = matr[i][0];
		for (int j = 0; j < M; j++)
			if (matr[i][j] <= min)
			{
				min = matr[i][j];//���������� �������
				min_n = j;//���������� ������ ������������
			}
		int max_n = -1;
		max = matr[i][min_n];
		//����� ������������� �������� � �������
		for (int jn = 0; jn < N; jn++)
			if (matr[jn][min_n] >= max)
			{
				max = matr[jn][min_n];
				max_n = jn;
			}
		if (max_n == i)
		{
			cout << i + 1 << " " << min_n + 1 << endl;
			k++;
		}
	}
	if (k == 0)
		cout << 0;
	system("pause");
	return 0;
}

