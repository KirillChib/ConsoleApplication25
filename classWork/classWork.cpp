
 

#include <iostream>
using namespace std;
struct Product
{
	string name;
	virtual void SetName(string name) = 0;
};

class Company
{
public:
	virtual Product* Creat() = 0
};
class Ps :public Product
{
public:
	Ps() {};
	// Унаследовано через Product
	virtual void SetName(string name) override
	{
		this-> name = name;
	}
};
class Sony:public Company
{
public:
	// Унаследовано через Company
	 virtual Product* Creat( ) override
	{
		return new Ps();
	}
};
int main()
{
	
}
