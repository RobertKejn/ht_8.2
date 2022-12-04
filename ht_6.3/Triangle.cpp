#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "FigureException.h"

Triangle::Triangle() {
	name = "Треугольник";
	points = 3;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name) {
    std::cout << "Попытка создать "<< name << " со сторонами (" << a << " " << b << " " << c << ") и углами (" << A << " " << B << " " << C << ")\n";
    if (A + B + C == 180) {
        Triangle();
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        this->name = name;
        this->print_info_();
    }
    else throw FigureException{ name +" не создан, сумма углов != 180\n" };
}

void Triangle::print_info_()  {
    std::cout << "Создан: " << name << " со сторонами (" << a << " " << b << " " << c << " " << ") и углами (" << A << " " << B << " " << C <<"\n";
}

