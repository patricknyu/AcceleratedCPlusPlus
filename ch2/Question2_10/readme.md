#2-10

Explain each of the uses of std:: in the following program:
	
	int main()
	{
		int k = 0;
		while (k != n)
		{
			// invariant: we have written k asterisks so far
			using std::cout;
			cout << "*";
			++k;
		}
		std::cout << std::endl; //std:: is required here
		return 0; 
	}

In the first instance we use the "using" statement to use the synonym of just simply cout for std::cout.  Hence, in the next line we do not need to write std::cout and instead just use cout.

The second instance occurs out side the curly bracers which we wrote using std::cout, so we need to write out std::cout << std::endl.  It is a different scope.
