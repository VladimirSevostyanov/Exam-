#include <iostream>
#include "complex.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    Complex c1, c2;
	//вводим два числа
	cout << "„исло є1\n";
	c1 = input_complex();
	cout << "\n„исло є2\n";
	c2 = input_complex();

	cout << "\nc1: "; c1.print();
    cout << "\nc2: "; c2.print();

	//выполн¤ем операции и сразу выводим результат
	cout << "\nсумма: ";
	sum(c1, c2).print();
    cout << "\nразность: ";
	sub(c1, c2).print();
	cout << "\nпроизведение: ";
	mult(c1, c2).print();
	cout << "\nделение: ";
	div(c1, c2).print();
	cout << endl;
    return 0;
}
