#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int choise;
	double num1, num2, result;
	char op;

	do {
		cout << "1. Сложение\n";
		cout << "2. Вычетание\n";
		cout << "3. Умножение\n";
		cout << "4. Деление\n";
		cout << "5. Возведение в степень\n";
		cout << "6. Нахождение квадратного корня\n";
		cout << "7. Нахождение 1 процента от числа\n";
		cout << "8. Найти факториал\n";
		cout << "9. Выйти из программы\n";
		cout << "Выберите операцию:";
		cin >> choise;
		switch (choise) {
		case 1:
			cout << "Ведите первое число";
			cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Результат: " << result << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Результат: " << result << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Результат: " << result << endl;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            if (num2 == 0) {
                cout << "Ошибка: деление на ноль\n";
            }
            else {
                result = num1 / num2;
                cout << "Результат: " << result << endl;
            }
            break;
        case 5:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Введите степень: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Результат: " << result << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Ошибка: квадратный корень из отрицательного числа\n";
            }
            else {
                result = sqrt(num1);
                cout << "Результат: " << result << endl;
            }
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            result = num1 / 100;
            cout << "Результат: " << result << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Ошибка: факториал отрицательного числа не определен\n";
            }
            else {
                result = 1;
                for (int i = 1; i <= num1; i++) {
                    result *= i;
                }
                cout << "Результат: " << result << endl;
            }
            break;
        case 9:
            cout << "Программа завершена\n";
            break;
        default:
            cout << "Ошибка: неверный выбор операции\n";
        }
    } while (choice !=9) ;

    return 0;
}


		