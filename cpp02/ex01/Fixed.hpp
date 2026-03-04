
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();

		Fixed	&operator=(const Fixed &other);

		bool	operator>(const Fixed&other)const;
		bool	operator<(const Fixed&other)const;
		bool	operator>=(const Fixed&other)const;
		bool	operator<=(const Fixed&other)const;
		bool	operator==(const Fixed&other)const;
		bool	operator!=(const Fixed&other)const;

		Fixed	operator+(const Fixed&other)const;
		Fixed	operator-(const Fixed&other)const;
		Fixed	operator*(const Fixed&other)const;
		Fixed	operator/(const Fixed&other)const;
		
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		int		toInt()const;
		float	toFloat()const;
		int		getRawBits()const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif
