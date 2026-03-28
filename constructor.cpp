#include <iostream>
using namespace std;


class Strategy
{
	public:
		void PrintMemberVariables(const Strategy& obj)
		{
			cout << "order_qty:\t" << obj.order_qty << endl;
			cout << "price:\t" << obj.price << endl;
			cout << "account_name:\t" << obj.account_name << endl;
		}
		
		Strategy(const double qty, const double prc, string an)
		{
			order_qty=qty;
			price=prc;
			account_name=an;
		}
		
		Strategy(const double qty, const double prc)
		{
			order_qty=qty;
			price=prc;
		}
	private:
		double order_qty;
		double price;
		string account_name;
};
int main()
{
	Strategy obj(100, 200, "Pramodh S");
	obj.PrintMemberVariables(obj);
	
	cout << "----------------------------------" << "\n";
	
	Strategy obj1(200, 300);
	obj1.PrintMemberVariables(obj1);
	return 0;
}
