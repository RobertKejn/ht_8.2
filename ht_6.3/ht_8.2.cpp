#include <Windows.h>
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Parallelogram.h"
#include "Rect.h"
#include "Rhombus.h"
#include "Square.h"
#include "FigureException.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        RightTriangle rt = RightTriangle(1, 1, 1, 88, 2);
        Figure* fig = &rt;
        //rt.print_info(fig);
        std::cout << std::endl;
    }
    catch (FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        IsoscelesTriangle it = IsoscelesTriangle(10, 20, 100, 100);
        Figure* fig = &it;
        //it.print_info(fig);
        std::cout << std::endl;
    }
    catch (FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        EquilateralTriangle et = EquilateralTriangle(200);
        Figure* fig = &et;
        //et.print_info(fig);
        std::cout << std::endl;
    }
    catch (FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Parallelogram p = Parallelogram(10, 20, 30, 60);
        Figure* fig = &p;
        //p.print_info(fig);
        std::cout << std::endl;
    }
    catch (FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Rect rect = Rect(10, 20);
        Figure* fig = &rect;
        //rect.print_info(fig);
        std::cout << std::endl;
    }
    catch (FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Rhombus rhomb = Rhombus(10, 45, 45);
        Figure* fig = &rhomb;
        //rhomb.print_info(fig);
        std::cout << std::endl;
    }
    catch (FigureException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Square square = Square(30);
        Figure* fig = &square;
        //square.print_info(fig);
    }
    catch (FigureException& e) {
        std::cout << e.what() << std::endl;
    }
}