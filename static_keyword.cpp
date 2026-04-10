#include <iostream>


class Strategy
{
	int order_qty;
	static std::string company_name;
	static int strategy_count;
	public:
	Strategy(int qty) : order_qty(qty)
	{
		std::cout << "Constructor called" << std::endl;
	}

	void PlaceOrder()
	{
		std::cout << "Placing the order in the market" << std::endl;
		strategy_count++;
	}

	static void DisplayTotalStrategies()
	{
		std::cout << "Total no of Strategies Placed:\t" << strategy_count << std::endl;
	}
	
	void DisplayQty()
	{
		std::cout << "OrderQty:\t" << order_qty << std::endl;
	}

	static void DisplayCompanyName()
	{
	
		std::cout << "Company_name:\t" << company_name << std::endl;
	}
};

std::string Strategy::company_name = "GoldmanSachs";
int Strategy::strategy_count=0;

int main()
{
	Strategy obj(100);
	obj.PlaceOrder();

	Strategy obj1(200);
	obj1.PlaceOrder();

	Strategy::DisplayTotalStrategies();
	//obj.DisplayQty();
	//Strategy::DisplayQty(); // error - non static cannot be called directly using class name 


	//obj.DisplayCompanyName();
	//Strategy::DisplayCompanyName();
	return 0;
}
