#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point const a(Fixed(1), Fixed(1));
	Point const b(Fixed(2), Fixed(5));
	Point const c(Fixed(5), Fixed(4));
	Point const point(Fixed(2), Fixed(3));
	Point point1(10, 30);
	std::cout <<"BSP : ";
	std::cout << bsp(a, b, c, point) << std::endl;
	std::cout <<"BSP : ";
	std::cout << bsp(a, b, c, point1) << std::endl;
}