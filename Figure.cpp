#include "Figure.h"

void Figure::print()
{
	std::wcout << name << ":\n";
	std::wcout << L"Стороны: ";
	print_sides();
	std::wcout << '\n';
	std::wcout << L"Углы: ";
	print_angles();
	std::wcout << '\n';
}

Figure::Figure(const std::wstring & nm) : name(nm) { }

Figure::~Figure() { }