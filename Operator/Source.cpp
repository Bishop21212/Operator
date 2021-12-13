#include<iostream>

using namespace std;

class Fraction
{
public:
	Fraction(int sec) :seconds(sec)
	{
	}
	void print()
	{
		cout << seconds << " seconds" << endl;
	}
	Fraction operator +(Fraction c2)
	{
		return Fraction(this->seconds + c2.seconds);
	}
	Fraction operator - (Fraction c2)
	{
		return Fraction(this->seconds - c2.seconds);
	}
	Fraction& operator +=(Fraction c2)
	{
		seconds += c2.seconds;
		return *this;
	}
	Fraction& operator -= (Fraction c2)
	{
		seconds -= c2.seconds;
		return *this;
	}
	Fraction operator / (Fraction c2)
	{
		seconds /= c2.seconds;
		return *this;
	}
	bool operator == (Fraction c2)
	{
		return seconds == c2.seconds;
	}
	bool operator != (Fraction c2)
	{
		return seconds != c2.seconds;
	}
	bool operator < (Fraction c2)
	{
		return seconds < c2.seconds;
	}
	bool operator > (Fraction c2)
	{
		return seconds > c2.seconds;
	}
	bool operator <= (Fraction c2)
	{
		return seconds <= c2.seconds;
	}
	bool operator >= (Fraction c2)
	{
		return seconds >= c2.seconds;
	}
	int seconds;
};

int main()
{
	Fraction c1(40);
	Fraction c2(20);
    Fraction c3 = c1 + c2;
	c3.print();
	c1 - c2;
	c1.print();
	c1 += c2;
	c1.print();
	c1 -= c2;
	c1.print();
	Fraction c4 = c1 / c2;
	c4.print();
	bool b3 = c1 == c2; bool b4 = c1 != c2;
	bool b5 = c1 <= c2; bool b6 = c1 >= c2;
	cout << boolalpha <<  b3 << " " << b4 << endl;
	cout << boolalpha << b5 << " " << b6 << endl;

}