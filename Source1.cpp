#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	int matrix[100][100], // ����������� ������
		rows = 0,      // ������
		columns = 0;      // �������

	cout << "������� ���������� ����� �������: ";
	cin >> rows;

	cout << "������� ���������� �������� �������: ";
	cin >> columns;

	// ���������� �������
	for (int ix = 0; ix < rows; ix++)
		for (int jx = 0; jx < columns; jx++)
		{
			cout << "matrix[" << (ix + 1) << "][" << (jx + 1) << "] = ";
			cin >> matrix[ix][jx];
		}

	int vector[100]; // ������
	cout << "������� �������� �������:\n";

	// ���������� �������
	for (int ix = 0; ix < columns; ix++)
	{
		cout << "vector[" << (ix + 1) << "] = ";
		cin >> vector[ix];
	}

	cout << "\n��������� �������:\n";
	for (int ix = 0; ix < rows; ix++)
	{
		for (int jx = 0; jx < columns; jx++)
		{
			cout << setw(4) << matrix[ix][jx];
		}
		cout << endl;
	}

	cout << "\n��������� ������:\n";
	for (int ix = 0; ix < columns; ix++)
	{
		cout << setw(4) << vector[ix] << endl;
	}

	int out[100]; // �������� ������
	// ��������� ��������� ������� �� ������
	for (int ix = 0; ix < rows; ix++)
	{
		out[ix] = 0;
		for (int jx = 0; jx < columns; jx++)
			out[ix] += matrix[ix][jx] * vector[jx];
	}

	cout << "\�������������� ������:\n";
	for (int ix = 0; ix < rows; ix++)
	{
		cout << setw(4) << out[ix] << endl;
	}

	int max = out[0]; // ���������� ��� �������� ������������� ��������

	for (int ix = 0; ix < rows; ix++)
		if (max < out[ix]) // ����� ������������� �������� � ���������� �������
			max = out[ix];

	cout << "\n������������ �������� = " << max << endl;
	return 0;
}