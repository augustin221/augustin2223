#include <iostream>
using namespace std;
#include "ConsoleApplication60/array.h"

int main()
{

	Array myArray1;     // 10-�� ���������� ������ ������ Array, �� ���������
	Array myArray2(15); // 15-�� ���������� ������ ������ Array

	cout << "������ ������� myArray1: " << myArray1.getSize() << endl;
	cout << "�������� ������� myArray1, ����� ��� ��������:\n";
	myArray1.getArray(); // ����� ��������� ������� � ������� ������ ������ Array

	cout << "������ ������� myArray2: " << myArray2.getSize() << endl;
	cout << "�������� ������� myArray2, ����� ��� ��������:\n";
	cout << myArray2; // ����� ��������� ������� � ������� �������������� ��������� ������

	cout << "������� 10 �����: ";
	myArray1.setArray(); // ���������� ������� � ������� ������ ������ Array

	// ��������� ������
	cout << "��������� ������: " << myArray1;

	cout << "������� 15 �����: ";
	cin >> myArray2; // ���������� ������� � ������� �������������� ��������� �����

	// ��������� ������
	cout << "��������� ������: " << myArray2;

	Array myArray3(myArray1);  // ������� ������ ������ Array, ��������� ����������� �����������

	cout << "������ ������� myArray3: " << myArray1.getSize() << endl;
	cout << myArray3; // ����� ��������� �������

	myArray3 = myArray2; // ����������� ������� myArray3 ������ myArray2
	cout << myArray3; // ����� ��������� ������� myArray3

	if (myArray1 == myArray2)
		cout << "������� myArray1 � myArray2 �����!\n";
	else
		cout << "������� myArray1 � myArray2 �� �����!\n";

	// ����� �������� �������, ��������� ������������� �������� ������ �������
	cout << "������� ������� myArray1: " << myArray1[myArray1.getSize() - 1] << endl;

	Array myArray4 = myArray2 + myArray3; // ������������� �������� ��������

	cout << "������ myArray4:\n" << myArray4;

	myArray4 += 111; // ���������� �������� 111 � ����� �������
	cout << "������ myArray4 + 8:\n" << ((myArray4 += 112) += 113);

	// ������� �������� ������� myArray4: 111 112 113 ����������� ������������� �������� �����
	cout << (myArray4 - 111 - 112 - 113);

	int pos = 0;
	if ((pos = myArray4.search(30)) != -1)
		cout << "������� �������� ��������: " << pos << endl;
	else
		cout << "������� ������� �� ������!\n";

	myArray4.choicesSort(); // ���������� �� �����������
	cout << myArray4;

	return 0;
}