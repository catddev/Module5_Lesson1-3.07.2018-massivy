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
		cout << "максимальное значение: "<< max_v << endl << "минимальное значение: "<< min_v << endl;
		
	}
	break;
	case 3: // проверка симметричности
	{

		const int n = 6;
		int a[n];
		bool flag = true;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];

			if (a[i] == a[n - i - 1]) flag = true;
			else flag = false;
			if (i > n / 2+1) break;
		}
		if (flag) cout << "symmetric" << endl;
		else cout << "non-symmetic" << endl;


	}
	break;
	case 4: //проверка на симметричность массива - оптимальное решение
	{
		const int n = 10;
		int a[n] = {1, 2, 3, 4, 5, 5, 4, 7, 2, 1};
		bool f = true;

		for (int i = 0; i < n/2; i++)
		{
			if (a[i] != a[n - 1 - i])
			{
				f = false;
				break;
			}
		}
		if(f) cout << "symmetric" << endl;
		else cout << "non-symmetic" << endl;
	
	}
	break;
	case 5:
	{
		const int n = 10;
		int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		
		int b = 0;

		for (int i = 0; i < n/2; i++) // данный цикл для "отражения" значений элементов. 
		{                             // выполнять только до половины массива n/2, иначе просто придет к изначальным значениям если будет все до конца отражать
			/*b = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = b;*/

			swap(a[i], a[n - 1 - i]); // более оптимальная замена, без третьей переменной
		}

		for (int j = 0; j < n; j++) // отдельный ицкл нужен для вывода значений массива с ОТРАЖЕННЫМИ значениями
		{
			cout << a[j] << "\t";
		}

		cout << endl;
		
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