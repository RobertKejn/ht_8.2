#include "Parallelogram.h"
#include "Quadrangle.h"

Parallelogram::Parallelogram(int a, int b, int A, int B, std::string name) : Quadrangle(a, b, a, b, A, B, A, B, name) {  }
Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B, "Паралелограм") {  }