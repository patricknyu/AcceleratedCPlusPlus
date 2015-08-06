#1-4

What about this one? What if we change }} to };} in the third line from the end? 

	#include <iostream>
	#include <string>
	int main()
	{
		{ const std::string s = "a string"; std::cout << s << std::endl;
		{ const std::string s = "another string"; std::cout << s << std::endl; }}
		return 0;
	}

This is valid.  The s = "another string" doesn't affect the first s.

If we change it, doens't change the program.  At the location of the semi-colon, there's nothing to get rid of anyways.
