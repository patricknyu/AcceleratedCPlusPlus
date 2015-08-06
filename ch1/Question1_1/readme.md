#1-1

Are the following definitions valid? Why or why not?

	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";

These are valid.  The first line is a standard string defenition as a constant.  The second is another string defenition.  It's a bit confusing since hello is not in paranthesis, but hello is actually a variable we chose in the first line. Also, the second part is one whole string.  The fact that they are constants are also fine since the second definition makes a copy of the first string.
