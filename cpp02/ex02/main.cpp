
#include "Fixed.hpp"

int main()
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}

		std::cout << std::endl;

	{
		Fixed	a;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << std::endl;

		std::cout << a++ << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << std::endl;

		Fixed	b(42.4242f);
		Fixed	c(42.4242f);
	
		std::cout << b << " + " << c << " = " << b + c << std::endl;
		std::cout << b << " - " << c << " = " << b - c << std::endl;
		std::cout << b << " * " << c << " = " << b * c << std::endl;
		std::cout << b << " / " << c << " = " << b / c << std::endl;
		std::cout << std::endl;

		std::cout << b << " == " << c << " = " << (b == c) << std::endl;
		std::cout << b << " != " << c << " = " << (b != c) << std::endl;
		std::cout << std::endl;
		
		Fixed	d(42.4242f);
		Fixed	e(42);
		std::cout << d << " > " << e << " = " << (d > e) << std::endl;
		std::cout << d << " < " << e << " = " << (d < e) << std::endl;
	}

	return 0;
}
