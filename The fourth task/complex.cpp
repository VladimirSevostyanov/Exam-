#include "Complex.h"
#include <math.h>
#include <iostream>

//ввод комплексного числа с клавиатуры
Complex input_complex()
{
	double re, im;
	std::cout << "¬ведите действительную часть: ";
	std::cin >> re;
	std::cout << "¬ведите мнимую часть: ";
	std::cin >> im;
	return Complex(re, im);
}

//сложение
Complex sum(Complex c1, Complex c2)
{
    return Complex(c1.re + c2.re, c1.im + c2.im);
}

//разность
Complex sub(Complex c1, Complex c2)
{
    return Complex(c1.re - c2.re, c1.im - c2.im);
}

//умножение
Complex mult(Complex c1, Complex c2)
{
    return Complex(c1.re * c2.re - c1.im * c2.im, c1.re * c2.im + c1.re * c1.im);
}

//деление
Complex div(Complex c1, Complex c2)
{
    double z = pow(c1.im, 2) + pow(c2.im, 2); //делитель из формулы
    if (z != 0) //исключаем деление на ноль
    {
        double re = (c1.re * c2.re + c1.im * c2.im) / z;
        double im = (c2.re * c1.im - c1.re * c2.im) / z;
        return Complex(re, im);
    }
    else
        return c1;
}
