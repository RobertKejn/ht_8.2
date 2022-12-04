#pragma once
#include <Windows.h>
#include <iostream>
#include <string>

class FigureException : public std::exception
{
public:
    FigureException(std::string text);

    virtual const char* what();

protected:
    std::string text;
};
