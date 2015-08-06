#include <iostream>

using std::cout;
using std::endl;

int main()
{
	cout<<"This is the product of the numbers in the range [1,10)"<<endl;
	int prod = 1;
	for (int i = 1;i<10;++i)
	{
		prod  = prod*i;
	}
	cout << prod << endl;
}
