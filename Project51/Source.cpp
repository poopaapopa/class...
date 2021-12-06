#include <iostream>
#include<conio.h>
using namespace std;

double getSum(double x)
{
	return x;
}
template<class... Args>
double getSum(double x, Args...args)
{
	return x + getSum(args...);
}


void print(){}
template <class First, class ...Other>
void print(const First &first, const Other& ...other)
{
	cout << first;
	print(other...);
}
template<class...Args>
void println(const Args& ...args)
{
	print(args...);
	cout << "\n";
}
struct Point
{
	int x;
	int y;
	friend ostream& operator<<(ostream& out, const Point& p)
	{
		out << "(" << p.x << "," << p.y << ")";
		return out;
	}
};

int main()
{
	//int sum = getSum(1, 2, 3, 4, 5);
	//cout << sum << "\n";
	println("hello world");
	println("Pi = ", 3.14, '\n', 2, "*", 2, "=", 2 * 2);
	Point point{ 12,2 };
	println("Point: ", point);
	return 0;
}