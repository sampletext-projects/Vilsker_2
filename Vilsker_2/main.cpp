#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int N1, N2;

	char c;
	
	cout << "��������� ��������� ������ ���-111 �������� ����������" << endl;
	cout << "��������� �������� ��������� �������� ����� ����� ������" << endl;
	
	do
	{
		cin >> N1;
		cin >> N2;
		for (int i = N1; i <= N2; i++)
		{
			//������������� �� ����� k ������ M
			int m = i;//����� ���������� ����������� ��������, ����� �� �������� ��� ��� �����������
			int k = i * i;
			bool ends = true;
			while (m != 0)
			{
				if (m % 10 != k % 10)
				{
					ends = false;
					break;
				}
				m /= 10;
				k /= 10;
			}

			if (ends)
			{
				cout << i * i << " (" << i << "^2) ends with " << i << endl;
			}
		}
		cout << "Repeat (1)? ";
		cin >> c;
	}
	while (c == '1');


	return 0;
}
