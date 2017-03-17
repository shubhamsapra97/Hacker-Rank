#include<iostream>
using namespace std;
class Base 
{
	public:
	void print()
	{
		cout<<"print of base\n";
	}
	void add()
	{
		cout<<"add";
	}
};
class Derived:public Base
{
	public:
		void print()
		{
			cout<<"print of derived\n";
		}
};
main()
{
	Base B;
	B.print();
	Derived D;
    D.print();    
}
