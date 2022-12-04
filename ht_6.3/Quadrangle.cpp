#include "Figure.h"
#include "Quadrangle.h"
#include <string>
#include <iostream>
#include "FigureException.h"

Quadrangle::Quadrangle() {
	name = "���������������";
	points = 4;
}

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle() {
    std::cout << "������� ������� " << name <<  " �� ��������� (" << a << " " << b << " " << c << " " << d << ") � ������ (" << A << " " << B << " " << C << " "<< D << ")\n";
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
    else throw FigureException{ name + " �� ������, ����� ����� != 360\n" };
}

void Quadrangle::print_info_() {
    std::cout << "������: " << name << " �� ��������� (" << a << " " << b << " " << c << " " << " " << d << ") � ������ (" << A << " " << B << " " << C << " "<< D << ")\n";
}