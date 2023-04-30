#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed
{
    private:
        int rawbits;
        static const int    bits = 8;
    public:
        Fixed();
		Fixed(int const n);
		Fixed(float const f);
        ~Fixed();
        Fixed(const Fixed &copy);

        Fixed   &operator=(const Fixed &f);
		float	operator+(const Fixed &f);
		float	operator-(const Fixed &f);
		float	operator*(const Fixed &f);
		float	operator/(const Fixed &f);

		bool	operator>(const Fixed &f);
		bool	operator<(const Fixed &f);
		bool	operator>=(const Fixed &f);
		bool	operator<=(const Fixed &f);
		bool	operator==(const Fixed &f);
		bool	operator!=(const Fixed &f);

		float	operator++(void);
		float	operator--(void);

		Fixed	operator++(int);
		Fixed	operator--(int);

        int getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int toInt(void) const;

		Fixed	static &min(Fixed &a, Fixed &b);
		Fixed	static &max(Fixed &a, Fixed &b);
		const Fixed	static &min(const Fixed &a, const Fixed &b);
		const Fixed	 static &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &f);

#endif