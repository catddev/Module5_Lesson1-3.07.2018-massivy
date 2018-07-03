#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	cout << "Задача № ";
	cin >> tn;

	switch (tn)
	{
	case 1:
	{
		/*int a[10];
		
		const int n = 10;
		int a[] = { 12, 30, 9 };

		for (int i = 0; i < 10; i++)
		{
			cout << a[i] << endl;
		}
		*/
	}
	break;
	case 2:
	{
		const int n = 5;
		int a[n];

		int max_v = INT_MIN; // когда ищем максимум вводим сначала МИНИМАЛЬНО возможное значение, потом с ним сравниваем
		int min_v = INT_MAX; // здесь наоборот ищем минимум и сравниваем с максимальным значением

		/*int max = a[1];*/

		for (int i = 0; i < 5; i++)
		{
			cin >> a[i];
			if (a[i] > max_v) max_v = a[i];
			if (a[i] < min_v) min_v = a[i];
		}
		cout << max_v << endl << min_v << endl;
		

		
	}
	break;
	case 3:
	{

	}
	break;
	case 4:
	{

	}
	break;
	case 5:
	{

	}
	break;
	case 6:
	{

	}
	break;
	case 7:
	{

	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;

	system("pause");
	return 0;
}