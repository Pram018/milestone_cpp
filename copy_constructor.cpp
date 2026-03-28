#include <bits/stdc++.h>
using namespace std;

class Strategy
{
	int order_qty;
	double price;
	string user_name;
	
public:
	Strategy(int qty, double prc, string u_n)
	{
		order_qty=qty;
		price=prc;
		user_name=u_n;
	}
	
	void printMemberVariables()
	{
		cout << "order_qty:\t" << order_qty << endl;
		cout << "price:\t" << price << endl;
		cout << "user_name:\t" << user_name << endl;
	}
		
};
int main()
{
	Strategy obj1(100, 200.0, "Prathap");
	obj1.printMemberVariables();
	
	cout << "----------------------------------------" << "\n";
	
	// copying the data of obj1 to obj2
	Strategy obj2(obj1);
	obj2.printMemberVariables();
	
	return 0;
}