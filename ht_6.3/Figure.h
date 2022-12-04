#pragma once
#include <string>
class Figure {
protected:
	std::string name;
	int points;

	virtual void print_info_();

public:
	Figure();
	void print_info(Figure* f);
};