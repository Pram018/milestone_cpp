/*
 ASSIGNMENT PROBLEM
 1.Create a class Strategy which contains three member variables i.e. order_qty, limit_price, account_id, and account_name.
 2.Write a function that will print the value of all the variables defined in the previous question.
 3.Create the object of this class
 4.Try to access the member variable inside and outside the class
 5.Try modifying the access modifier from public to private/protected(Try different combinations for different variables). 
*/

#include <iostream>
using namespace std;

class Strategy
{
	private:
	//protected:
		int order_qty;
		int limit_price;
	public:
		int account_id;
		string account_name;


		void setData(int qty, int price, int id, string name) 
		{
			order_qty=qty; // accessing the private member variables inside the class and assigning the value.
			limit_price=price;
			account_id=id; // accessing public member variables inside the class.
			account_name=name;
		}

		void printDetails()
		{
			cout << "order qty:\t" << order_qty << endl;
			cout << "limit_price:\t" << limit_price << endl;
			cout << "account id:\t" << account_id << endl;
			cout << "account name:\t" << account_name << endl;
		}

};

int main()
{
	Strategy obj;
	obj.setData(100, 200, 123083, "Pramodh S");
	//obj.account_id=123083;
	//obj.account_name="Pramodh S";
	obj.printDetails(); // printing the details via public function.
	return 0;
}
