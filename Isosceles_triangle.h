#pragma once
#include "Triangle.h"

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(const std::wstring & nm = L"Равнобедренный треугольник", int a = 10, int b = 20, int A = 50, int B = 60);
};