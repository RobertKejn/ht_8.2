#include <iostream>
#include "Figure.h"
#pragma once
class  Triangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

    void print_info_() override;

public:
    Triangle();

    Triangle(int a, int b, int c, int A, int B, int C, std::string name);
};