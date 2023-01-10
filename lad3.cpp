#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    int number1 = 10;
	int number2 = 4;

	cout << "number1 = " << number1 << endl;
	cout << "number2 = " << number2 << endl;

	number1 += number2;  // эквивалентно записи number1 = number1 + number2 
	cout << "Результат += : " << "number1 = " << number1 << endl;
	number1 -= number2;  // number1 = number1 - number2 и т.д. 
	cout << "Результат -= : " << "number1 = " << number1 << endl;
	number1 *= number2;
	cout << "Результат *= : " << "number1 = " << number1 << endl;
	number1 /= number2;
	cout << "Результат /= : " << "number1 = " << number1 << endl;
	number1 %= number2;
	cout << "Результат %= : " << "number1 = " << number1 << endl;

	cout << endl;

	return 0;
}