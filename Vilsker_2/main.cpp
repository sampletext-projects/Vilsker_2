#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int N1, N2;

	char c;
	
	cout << "Выполнила студентка группы УТН-111 Кришпенц Александра" << endl;
	cout << "Программа проверки окончания квадрата числа самим числом" << endl;
	
	do
	{
		cin >> N1;
		cin >> N2;
		for (int i = N1; i <= N2; i++)
		{
			//Заканчивается ли число k числом M
			int m = i;//здесь необходимо скопировать значение, чтобы не потерять его при вычислениях
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
