#include <iostream>
#include <string.h>

using namespace std;

struct Data //создание структуры
{
	int year;
	char name[10];
};

int main()
{
	setlocale(LC_ALL, "rus");

	Data *p = new Data[1];//объект структуры

	int var = 1; //будет хранить выбор пользователя (продолжить или выйти)
	int size = 1; //размер массива структур

	while (var)
	{
		if (size == 1)//просто вносим данные в 0-е элементы
		{
			cout << "Имя: ";
			cin >> p[size - 1].name;
			cout << "Возраст: ";
			cin >> p[size - 1].year;
			cout << "Элементы структуры объекта Р:  " << p[size - 1].name << "  " << p[size - 1].year << ";\n";
		}
		else//size > 1
		{
			Data *copy = new Data[size - 1];//создаем новую структуру для копирования в нее данных

			for (int i = 0; i < size - 1; i++)//копируем данные перед отчисткой памяти объекта р
			{
				strcpy(copy[i].name, p[i].name);
				copy[i].year = p[i].year;
			}

			delete[] p; //освобождаем  память

			p = new Data[size]; //выделяем новую память

			for (int i = 0; i < size - 1; i++) // обратное копирование в объект р
			{
				strcpy(p[i].name, copy[i].name);
				p[i].year = copy[i].year;
			}

			delete[] copy; //освобождаем память

			cout << "Имя: ";//дописываем новые введенные данные
			cin >> p[size - 1].name;
			cout << "Возраст: ";
			cin >> p[size - 1].year;

			for (int i = 0; i < size; i++)//выводим все данные  на экран
			{
				cout << i << "-е элементы структуры объекта Р:  " << p[i].name << "  " << p[i].year << ";\n";
			}
		}

		size++;//счетчик +1

		cout << "\nВнести еще данные - 1, выход - 0: ";
		cin >> var;
		while (var != 0 && var != 1)//если пользователь ввел не 0 и не 1
		{
			cout << "Ошибка ввода!\n";
			cout << "\nВнести еще данные - 1, выход - 0: ";
			cin >> var;
		}
	}

	delete[] p;//освобождение памяти перед завершением работы программы
	return 0;
}