#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>

struct Complex
{
    double re, im; //действительная и мнимая части

    Complex() : re(0), im(0)
	{

	}

    Complex(double re, double im)
	{
		this->re = re;
		this->im = im;
	}

    //вывод комплексного числа
	void print()
	{
        std::cout << re << " + " << im << "i";
	}
};

Complex sum(Complex c1, Complex c2); //сложение
Complex sub(Complex c1, Complex c2); //разность
Complex mult(Complex c1, Complex c2); //умножение
Complex div(Complex c1, Complex c2); //деление

Complex input_complex(); //ввод комплексного числа с клавиатуры

#endif // COMPLEX_H_INCLUDED
