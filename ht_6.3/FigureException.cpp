#include "FigureException.h"
#include <string>

FigureException::FigureException(std::string text) : text(text) {}
const char* FigureException::what() {
	return text.c_str();
}