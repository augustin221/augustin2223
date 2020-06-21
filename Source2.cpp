#include <iostream>
using namespace std;

int main()
{
	int *p = new int[1];
	int *p2;//для копирования данных из массива p перед удалением памяти
	int a = 0;//число, которое вводит пользователь
	int nSize = 0;//размер динамического массива, который будет увеличиваться на 1, при вводе положительного числа
	while (a >= 0) {
		cout << "\nВведите целое число: ";
		cin >> a;
		if (a < 0) {
			break;//если введено отрицательное число - break
		}
		if (nSize == 0)
		{
			p[nSize] = a;
			cout << p[nSize];
			nSize++;//1
		}
		else
		{
			p2 = new int[nSize + 1];
			for (int i = 0; i < nSize; i++)
			{
				p2[i] = p[i];//скопировали массив         
			}
			p2[nSize] = a;
			delete[] p;
			p = new int[nSize + 1]; //выделяем новую память                   
			for (int i = 0; i < (nSize + 1); i++)
			{
				p[i] = p2[i]; //копируем данные из временного массива
				cout << p[i] << " ";//и отображаем все его элементы на экран
			}
			delete[] p2;
			nSize++;
		}
	}

	delete[] p;
	return 0;
}