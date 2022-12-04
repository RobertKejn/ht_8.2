#include "Figure.h"
#include <iostream>

Figure::Figure() {
	name = "Фигура";
	points = 0;
}

void Figure::print_info_() {
	std::cout << name << ":\n";
	std::cout << "Стороны: " << points << "\n";
}

void Figure::print_info(Figure* f) {
	f->print_info_();
}