#include <iostream>
#include <string.h>

using namespace std;

struct Data //�������� ���������
{
	int year;
	char name[10];
};

int main()
{
	setlocale(LC_ALL, "rus");

	Data *p = new Data[1];//������ ���������

	int var = 1; //����� ������� ����� ������������ (���������� ��� �����)
	int size = 1; //������ ������� ��������

	while (var)
	{
		if (size == 1)//������ ������ ������ � 0-� ��������
		{
			cout << "���: ";
			cin >> p[size - 1].name;
			cout << "�������: ";
			cin >> p[size - 1].year;
			cout << "�������� ��������� ������� �:  " << p[size - 1].name << "  " << p[size - 1].year << ";\n";
		}
		else//size > 1
		{
			Data *copy = new Data[size - 1];//������� ����� ��������� ��� ����������� � ��� ������

			for (int i = 0; i < size - 1; i++)//�������� ������ ����� ��������� ������ ������� �
			{
				strcpy(copy[i].name, p[i].name);
				copy[i].year = p[i].year;
			}

			delete[] p; //�����������  ������

			p = new Data[size]; //�������� ����� ������

			for (int i = 0; i < size - 1; i++) // �������� ����������� � ������ �
			{
				strcpy(p[i].name, copy[i].name);
				p[i].year = copy[i].year;
			}

			delete[] copy; //����������� ������

			cout << "���: ";//���������� ����� ��������� ������
			cin >> p[size - 1].name;
			cout << "�������: ";
			cin >> p[size - 1].year;

			for (int i = 0; i < size; i++)//������� ��� ������  �� �����
			{
				cout << i << "-� �������� ��������� ������� �:  " << p[i].name << "  " << p[i].year << ";\n";
			}
		}

		size++;//������� +1

		cout << "\n������ ��� ������ - 1, ����� - 0: ";
		cin >> var;
		while (var != 0 && var != 1)//���� ������������ ���� �� 0 � �� 1
		{
			cout << "������ �����!\n";
			cout << "\n������ ��� ������ - 1, ����� - 0: ";
			cin >> var;
		}
	}

	delete[] p;//������������ ������ ����� ����������� ������ ���������
	return 0;
}