#include <iostream>

class Strategy
{
public:
	int* order_qty;
	Strategy(int order_qty): order_qty(new int(order_qty))
	{
		std::cout << "Strategy call constructor called" << std::endl;
	}
	
	void fun()
	{
		std::cout << "This is Strategy class fun" << std::endl;
	}
	
	~Strategy()
	{
		std::cout << "Strategy class destructor called" << std::endl;
		delete order_qty;
	}
	
};
int main()
{
	Strategy* obj = new Strategy(100);
	obj->fun();	
	
	// we need to call the destructor explicitly when we create the obj using dynamic storage allocation
	obj->~Strategy();
	
	// delete obj;
	return 0;
}