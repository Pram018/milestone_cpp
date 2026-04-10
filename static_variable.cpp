#include <iostream>

// static variable inside a function
void fun()
{
	static int x=0;
	std::cout << x  << std::endl;
	x++;
}
int main()
{
	fun();
	fun();
	fun();
	return 0;
}
