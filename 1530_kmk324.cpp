#include <iostream>
#include "polygons.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	cout << "##������ ���̿� �ѷ� ���ϱ� ##" << endl;

	Triangle tri(5, 12);
	tri.calcArea();
	tri.calcPerimeter();
	
	Rectangle rect(10, 20);
	rect.calcArea();
	rect.calcPerimeter();

	tri.printArea();
	tri.printPerimeter();
	rect.printArea();
	rect.printPerimeter();

	return 0;
}

