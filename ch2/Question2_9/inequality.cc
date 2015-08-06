#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Give me a first number: " << endl;
	int first;
	cin >> first;

	cout << "Give me a second number: "  << endl;
	int second;
	cin >> second;
	
	cout << "The bigger number is: " << endl;
	if(first > second)
	{
		cout << first << endl;
	}
	else
	{
		cout << second << endl;
	}
	return 0;
}
