#include <iostream>
using namespace std;

int main()
{
	int *p = new int[1];
	int *p2;//��� ����������� ������ �� ������� p ����� ��������� ������
	int a = 0;//�����, ������� ������ ������������
	int nSize = 0;//������ ������������� �������, ������� ����� ������������� �� 1, ��� ����� �������������� �����
	while (a >= 0) {
		cout << "\n������� ����� �����: ";
		cin >> a;
		if (a < 0) {
			break;//���� ������� ������������� ����� - break
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
				p2[i] = p[i];//����������� ������         
			}
			p2[nSize] = a;
			delete[] p;
			p = new int[nSize + 1]; //�������� ����� ������                   
			for (int i = 0; i < (nSize + 1); i++)
			{
				p[i] = p2[i]; //�������� ������ �� ���������� �������
				cout << p[i] << " ";//� ���������� ��� ��� �������� �� �����
			}
			delete[] p2;
			nSize++;
		}
	}

	delete[] p;
	return 0;
}