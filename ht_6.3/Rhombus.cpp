#include "Rhombus.h"
#include "Parallelogram.h"
#include "Figure.h"

Rhombus::Rhombus(int a, int A, int B, std:: string name) : Parallelogram(a, a, A, B, name) { }
Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B, "Ромб") { }