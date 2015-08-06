#1-5

Is this program valid? If so, what does it do? If not, say why not, and rewrite it to be valid.

	#include <iostream>
	#include <string>
	int main() 
	{
		{ std::string s = "a string";
		{ std::string x = s + ", really";
		std::cout << s << std::endl;} 
		std::cout << x << std::endl;}
	return 0;
	}

This is not valid.  The std::cout << x<< std::endl; line doesn't work out since we cannot see the x that point.

Here's a rewrite

	#include <iostream>
	#include <string>
	int main() 
	{
		{std::string s = "a string";
		std::string x = s + ", really";
		std::cout << s << std::endl;
		std::cout << x << std::endl;}
	return 0;
	}
