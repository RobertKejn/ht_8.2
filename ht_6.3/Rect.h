#pragma once
#include "Parallelogram.h"

class Rect : public Parallelogram
{
public:
	Rect(int a, int b, std::string name);
	Rect(int a, int b);
};
