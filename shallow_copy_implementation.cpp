#include <iostream>
using namespace std;


class OrderBuilder
{
	public:
		OrderBuilder(string name, int id)
		{
			exchange_name=name;
			exchange_id=id;
		}
		
		int exchange_id;
		string exchange_name;	
};

class Strategy
{
	double order_qty;
	double price;
	string user_name;
	OrderBuilder* ob;

	public:
	Strategy(double qty, double prc, string name) : order_qty(qty), price(prc), user_name(name) {
		cout << "Inside Constructor" << endl;
		OrderBuilder* obj=new OrderBuilder("CME", 107);
		ob=obj;
	};

	~Strategy()
	{
		cout << "Destructor called" << endl;
		delete ob;
	}

	void PrintStrategy()
	{
		cout << "order_qty:\t" << order_qty << endl;
		cout << "price:\t" << price << endl;
		cout << "user_name:\t" << user_name << endl;
		cout << "ExchangeName:\t" << ob->exchange_name << endl;
	}
	
};
int main()
{
	Strategy* obj1=new Strategy(10, 100.0, "Prathap");
	obj1->PrintStrategy();
	
	cout << "-----------------------------------------------" << endl;

	Strategy obj2(*obj1); // shallow copy
	
	delete obj1;	// before calling obj2.PrintStrategy() fucition ill delete obj1
	obj2.PrintStrategy();
	return 0;
}
