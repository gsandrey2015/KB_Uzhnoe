/**********************************************************************
ѕрограмма дл€ подсчета числа точек c целочисленными координатами,
наход€щихс€ внутри и на границе круга c центром в начале координат и 
заданным радиусом r.

http://informatics.mccme.ru/mod/statements/view3.php?id=1144&chapterid=1541#1
***********************************************************************/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int r;
	cin >> r;
	long long int r2 = pow(r,2);
	int k=0;
	long long int i, j;
	for (i = r*(-1); i <= r; i++)
	{
		for (j = r*(-1); j <= r; j++)
			if (pow(i, 2) + pow(j, 2) <= r2)
				k++;
	}
	cout << k;
	system("pause");
    return 0;
}

