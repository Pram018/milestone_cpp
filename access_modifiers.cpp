#include <iostream>
using namespace std;

class Strategy
{
	//private:
	protected:
		double qty;
	public:
		double price;
		void printPriceQty()
		{
			cout << "qty:\t" << qty << endl;
			cout << "price:\t" << price << endl;
		}
};

int main()
{
	Strategy obj;
	obj.qty=100;
	obj.price=200;
	obj.printPriceQty();
	return 0;
}
