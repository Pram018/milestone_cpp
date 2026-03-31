/* Assignment 2

1.Create a Strategy class which contains three member variables i.e. order_qty, limit_price, account_id, 
and account_name, assign the value to these member variables using default constructor and parameterized constructor.

2.Write a function inside the strategy class that will increase the value of order_qty by 10 and limit_price by 5.

3.Write a function inside the Strategy class that will print the value of member variables associated 
with a particular object.

4.Initialize the member variables defined inside the Strategy class using normal initialization and then using list initialization.

5.Try to create an object using default copy constructor and print the value associated with both the objects

6.While creating an object, try to allocate memory dynamically to some of its member variables and using default copy 
constructor create another copy of this object.

7.While creating an object, try to allocate memory dynamically to some of its member variables and using deep copy constructor
 create another copy of this object.

*/


#include <iostream>
using namespace std;

class Strategy
{
public:
	int order_qty;
	double limit_price;
	int account_id;
	string account_name;
	
	// Default Constructor
	Strategy()
	{
		order_qty=0;
		limit_price=0;
		account_id=23083;
		account_name=NULL;
	}

	// Prarameterized Constructor
	Strategy(int qty,double lprc, int id, string name): order_qty(qty), limit_price(lprc), account_id(id), account_name(name) {};
	
    void Increment()
    {
        order_qty+=10;
        limit_price+=5;
    }
	
    void PrintStrategy() 
	{
		cout << "order_qty:\t" << order_qty << endl;
		cout << "limit_price:\t" << limit_price << endl;
		cout << "account_id:\t" << account_id << endl;
		cout << "account_name:\t" << account_name << endl;
		cout << "List data:\t" << ob->customer_id << endl;
		cout << "List data:\t" << ob->customer_name << endl;
	}
};


int main()
{
    cout << "-----------------Before--------------------" << endl;
	Strategy obj(10, 100, 23083, "Peter");
	obj.PrintStrategy();

    cout << "-------------------After-------------------" << endl;
    obj.Increment();
	obj.PrintStrategy();
	return 0;
}