#include <iostream>
using namespace std;


class Cat
{
	public:
		int value=100;
		void PhysicalFeatures()
		{
			std::cout << "They have claws" << std::endl;
		}
};

class Lion:public Cat
{
	public:
		void PhysicalFeatures1()
		{
			std::cout << "They have claws1" << std::endl;
			std::cout <<  "Value:\t" << value << std::endl;
		}		
};

int main()
{
	Lion l;
	l.PhysicalFeatures();
	l.PhysicalFeatures1();
	return 0;
}
