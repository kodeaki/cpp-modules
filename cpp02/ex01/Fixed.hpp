
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		long long int		_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		~Fixed();

		Fixed&	operator=(const Fixed &other);

		int		toInt()const;
		float	toFloat()const;
		int		getRawBits()const;
		void	setRawBits(int const raw);
};

std::ostream&	operator<<(std::ostream& outstream, const Fixed& fixed);

#endif
