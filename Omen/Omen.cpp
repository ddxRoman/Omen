// Hello World2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int Nal, k, Omen = 70000, ext, Per;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << "           Массив строк, слова в массиве через СТРИНГ         " << endl;
	const int Mont = 12;
	string Period[Mont] = { "Сентбяре", "Октябре", "Ноябре",
	"Декабре", "Январе", "Феврале", "Марте", "Апреле", "Майе", "Июне", "Июле", "Августе 2021" };

	cout << "Стоимость Omen " << Omen << " рублей" << endl << "";
	cout << "Сколько месяцев планируешь копить? ";	cin >> k;
	if (k <= 12)
	{
		{
			{
				cout << k << " Месяца тоесть купить в ";
				cout << Period[k-1];
				Nal = Omen / k;
				cout << ", нужно откладывать по " << Nal << " рублей в месяц" << endl << endl << endl;
				cout << "Хочешь посмотреть полную таблицу? Если да то напиши цыфру 1, если нет то нажми 0: ";
				cin >> ext;
				if (ext == 1)
				{
					for (int j = 1; j < 12 + 1; j++)
					{
						cout << j + 2 << " Месяца тоесть в ";
						cout << Period[j - 1];
						Per = j + 2;
						Nal = Omen / Per;
						cout << ", нужно откладывать по " << Nal << " рублей в месяц" << endl;
					}
				}
			}
		}
	}
	else { cout << "Слишком долго, если ты собираешься купить так не скоро то вообще иди нахуй, надо ли оно тебе \n" << endl; }
	system("pause");
}



