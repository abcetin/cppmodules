#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"
class Point
{
	Fixed const _x;
	Fixed const _y;

public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(const Point &point);

	Point &operator=(const Point& other);
	Fixed getX(void) const;
	Fixed getY(void) const;

	~Point();
};

#endif