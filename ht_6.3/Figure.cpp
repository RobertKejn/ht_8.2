#include "Figure.h"
#include <iostream>

Figure::Figure() {
	name = "������";
	points = 0;
}

void Figure::print_info_() {
	std::cout << name << ":\n";
	std::cout << "�������: " << points << "\n";
}

void Figure::print_info(Figure* f) {
	f->print_info_();
}