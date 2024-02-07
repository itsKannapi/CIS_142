#include "Geometry.h"

Geometry::Geometry(double b, double h) {
	this->Base = b;
	this->Height = h;
}

void Geometry::CalcRecArea() {
	this->Area = this->Base * this->Height;
}
double Geometry::getArea() {
	return this->Area;
}