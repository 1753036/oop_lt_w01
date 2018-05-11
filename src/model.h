#include <iostream>

struct Fraction
{
    int num;
    int den;
};

std::ostream &operator<<(std::ostream &out, const Fraction &f)
{
	if (f.num % f.den == 0)
		return out << f.num / f.den;
    return out << f.num << '/' << f.den;
}

std::istream &operator>>(std::istream &ins, Fraction &f)
{
	return ins >> f.num >> f.den;
}

bool orderByAcs(int a, int b) { 
	return a > b; 
}

bool orderByAcs(Fraction a, Fraction b) { 
	return ((float)a.num / a.den) > ((float)b.num / b.den); 
}

bool orderByDes(int a, int b) { 
	return a < b; 
}

bool orderByDes(Fraction a, Fraction b) { 
	return ((float)a.num / a.den) < ((float)b.num / b.den); 
}
