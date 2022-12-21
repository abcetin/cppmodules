#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point const a(1, 1);
	Point const b(2, 5);
	Point const c(5, 4);
	Point const point(1, 1);
	Point const point1(2, 3);


	bsp(a,b,c,point1);
	std::cout <<"BSP : ";
	std::cout << bsp(a, b, c, point) << std::endl;
	std::cout <<"BSP : ";
	std::cout << bsp(a, b, c, point1) << std::endl;
}