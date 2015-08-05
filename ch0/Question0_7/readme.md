#0-7. 

What about this one?

	#include <iostream>
	int main() {
	/* This is a comment that extends over several lines
	because it uses /* and */ as its starting and ending delimiters */
	std::cout << "Does this work?" << std::endl;
	return 0; }

No, we have a problem since the /* starts the comment and it gets ended by the first */.  This means that the extra " and */ as its starting and ending delimiters */" will not be interpreted as a comment, giving an error.
