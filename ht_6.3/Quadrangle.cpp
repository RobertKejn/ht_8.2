#include "Figure.h"
#include "Quadrangle.h"
#include <string>
#include <iostream>
#include "FigureException.h"

Quadrangle::Quadrangle() {
	name = "Четырехугольник";
	points = 4;
}

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle() {
    std::cout << "Попытка создать " << name <<  " со сторонами (" << a << " " << b << " " << c << " " << d << ") и углами (" << A << " " << B << " " << C << " "<< D << ")\n";
    if (A + B + C + D == 360) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = name;
        this->print_info_();
    }
    else throw FigureException{ name + " не создан, сумма углов != 360\n" };
}

void Quadrangle::print_info_() {
    std::cout << "Создан: " << name << " со сторонами (" << a << " " << b << " " << c << " " << " " << d << ") и углами (" << A << " " << B << " " << C << " "<< D << ")\n";
}