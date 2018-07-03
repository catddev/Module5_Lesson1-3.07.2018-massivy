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
		cout << "максимальное значение: " << max_v << endl << "минимальное значение: " << min_v << endl << endl;

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
			if (i > n / 2 + 1) break;
		}
		if (flag) cout << "symmetric" << endl << endl;
		else cout << "non-symmetic" << endl << endl;
	}
	break;
	
	case 5:
	{
		const int n = 10;
		int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		int b = 0;

		for (int i = 0; i < n / 2; i++) // данный цикл для "отражения" значений элементов. 
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
		cout << endl << endl;
	}
	break;
	case 6: // В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы
	{
		const int n = 5;
		int a[n];

		int max_v = INT_MIN;
		int min_v = INT_MAX;

		for (int i = 0; i < 5; i++)
		{
			a[i] = -100 + rand() % 200;
			cout << a[i] << endl;
			if (a[i] > max_v) max_v = a[i];
			if (a[i] < min_v) min_v = a[i];
		}
		cout << "максимальное значение: " << max_v << endl << "минимальное значение: " << min_v << endl << endl;
	}
	break;
	case 7: // первое и последнее элементы массивов не трогать, а остальные заменить на полусумму соседей с двух сторон
	{
		const int n = 5;
		double a[n] = { 1, 2, 4, 8, 10 };

		// 2) работает, но пришлось вводить второй массив

		double temp[n];

		for (int i = 0; i < n; i++)
		{
			temp[i] = a[i];

			if (i == 0 || i == n - 1) cout << a[i] << " ";
			else
			{
				a[i] = (temp[i - 1] + a[i + 1]) / 2.0;
				cout << a[i] << " ";
			}
		}
		cout << endl << endl;


		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl << endl;




		//////double temp = 0;
		//////double temp1, temp2;

		//////for (int i = 0; i <n; i++)
		//////{
		//////
		//////	if (i == 0 || i == n - 1) cout << a[i] << " ";

		//////	else
		//////	{
		//////		temp = (a[i-1] + a[i + 1]) / 2.0;
		//////		cout << temp << " ";
		//////		/*if (i==1) temp1 = temp;
		//////		else if (i==2) temp2 = temp;*/
		//////	}

		//////	if (i > 2) a[i - 2] = (a[i - 3] + a[i - 1]) / 2.0;
		//////	 
		//////}

		///////*a[1] = temp1;
		//////a[2] = temp2;*/
		//////cout << endl << endl;

		//////for (int j = 0; j < n; j++)
		//////{
		//////	cout << a[j] << " ";
		//////}
		//////cout << endl << endl;


			// 3) но здесь не происходит замены элементов массива, а просто вычисление и распечатка b, так что некорректно

				//double b = 0;
				//for (int i = 0; i < n; i++)
				//{
				//	if (i != 0 && i != n - 1)
				//	{
				//		b = (a[i - 1] + a[i + 1]) / 2.0;
				//		cout << b << " ";
				//	}
				//	else cout << a[i] << " ";
				//}
				//cout << endl << endl;

				//for (int i = 0; i < n; i++) // проверочная распечатка - значения элементов остались изначальными
				//{
				//	cout << a[i] << " ";
				//}
				//cout << endl << endl;
	}
	break;
	case 4: //проверка на симметричность массива - оптимальное решениe
	{
		const int x = 5;
		
		int a[x];
		cin >> a[x];

		bool f = true;

		for (int i = 0; i < x / 2; i++)
		{
			if (a[i] != a[x - 1 - i])
			{
				f = false;
				break;
			}
		}
		if (f) cout << "symmetric" << endl << endl;
		else cout << "non-symmetic" << endl << endl;
	}
	break;

	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;

	system("pause");
	return 0;
}