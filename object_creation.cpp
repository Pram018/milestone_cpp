#include <iostream>
using namespace std;

class Strategy 
{
	public:
		int order_qty;
		void PrintOrderQty()
		{
			cout << "Order Qty:\t" << order_qty << endl;
		}
};

int main()
{
	// Automatic storage allocation
	Strategy obj;
	obj.order_qty=10;
	obj.PrintOrderQty();
	

	// Dynamic storage allocation
	Strategy* obj1=new Strategy();
	obj1->order_qty=20;
	obj1->PrintOrderQty();

	delete obj1;

	return 0;
}
