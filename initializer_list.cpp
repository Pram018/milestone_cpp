#include <bits/stdc++.h>
using namespace std;

class Strategy
{
	int order_qty;
	double price;
	string user_name;
	
public:
	
	// initializer list
	Strategy(int qty, double prc, string u_n) : order_qty(qty), price(prc), user_name(u_n){};
	
	// Strategy(int qty, double prc, string u_n)
	// {
	// 	order_qty=qty;
	// 	price=prc;
	// 	user_name=u_n;
	// }
	
	void printMemberVariables()
	{
		cout << "order_qty:\t" << order_qty << endl;
		cout << "price:\t" << price << endl;
		cout << "user_name:\t" << user_name << endl;
	}
		
};
int main()
{
	Strategy obj(100, 200.0, "Prathap");
	obj.printMemberVariables();
	
	cout << "----------------------------------------" << "\n";
	
	Strategy obj1(50, 100.0, "Preetham");
	obj1.printMemberVariables();
	
	return 0;
}