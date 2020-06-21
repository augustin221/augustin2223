#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	int matrix[100][100], // статический массив
		rows = 0,      // строки
		columns = 0;      // столбцы

	cout << "Введите количество строк матрицы: ";
	cin >> rows;

	cout << "Введите количество столбцов матрицы: ";
	cin >> columns;

	// заполнение матрицы
	for (int ix = 0; ix < rows; ix++)
		for (int jx = 0; jx < columns; jx++)
		{
			cout << "matrix[" << (ix + 1) << "][" << (jx + 1) << "] = ";
			cin >> matrix[ix][jx];
		}

	int vector[100]; // вектор
	cout << "Введите элементы вектора:\n";

	// заполнение вектора
	for (int ix = 0; ix < columns; ix++)
	{
		cout << "vector[" << (ix + 1) << "] = ";
		cin >> vector[ix];
	}

	cout << "\nВведенная матрица:\n";
	for (int ix = 0; ix < rows; ix++)
	{
		for (int jx = 0; jx < columns; jx++)
		{
			cout << setw(4) << matrix[ix][jx];
		}
		cout << endl;
	}

	cout << "\nВведенный вектор:\n";
	for (int ix = 0; ix < columns; ix++)
	{
		cout << setw(4) << vector[ix] << endl;
	}

	int out[100]; // выходной вектор
	// умножение элементов матрицы на вектор
	for (int ix = 0; ix < rows; ix++)
	{
		out[ix] = 0;
		for (int jx = 0; jx < columns; jx++)
			out[ix] += matrix[ix][jx] * vector[jx];
	}

	cout << "\результирующий вектор:\n";
	for (int ix = 0; ix < rows; ix++)
	{
		cout << setw(4) << out[ix] << endl;
	}

	int max = out[0]; // переменная для хранения максимального значения

	for (int ix = 0; ix < rows; ix++)
		if (max < out[ix]) // поиск максимального значения в одномерном массиве
			max = out[ix];

	cout << "\nМаксимальное значение = " << max << endl;
	return 0;
}