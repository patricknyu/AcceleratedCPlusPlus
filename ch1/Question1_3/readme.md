#1-3

Is the following program valid? If so, what does it do? If not, why not?

	#include <iostream>
	#include <string>

	int main()
	{
		{ const std::string s = "a string"; std::cout << s << std::endl; }
		{ const std::string s = "another string"; std::cout << s << std::endl; }
		return 0;
	}

This is valid.  We can use the same const strings s when we keep them inside the curly brackets since it deletes it from memory once the curly brackets end.
