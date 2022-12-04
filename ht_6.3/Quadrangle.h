#include <string>
#include "Figure.h"
#pragma once


class  Quadrangle : public Figure
{
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    void print_info_() override;

public:
	 Quadrangle();

     Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};