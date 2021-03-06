#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
	cout << "Tell me what kind of shape you want 1 = Square, 2 = Rectangle, 3 = Triangle "<< endl;
	int type;
	cin >> type;

	if (type == 1)
	{
		cout << "How long do you want the sides? "<< endl;
		int length;
		cin >> length;

		const string top(length,'*');
		const string middleSpace(length-2,' ');
		const string middle = "*" + middleSpace + "*";

		for (int i = 0; i < length+2;++i)
		{
			if(i ==0 || i == length+1)
			{
				cout << top << endl;
			}

			else
			{
				cout << middle << endl;
			}
		}
	}
	if (type == 2)
	{
		cout << "How long do you want the width?(Must be at least 2) " << endl;
		int width;
		cin >> width;

		cout << "How long do you want the height?(Must be at least 2) " << endl;
		int height;
		cin >> height;

		const string top(width,'*');
		const string middleSpace(width-2,' ');
		const string middle = "*" + middleSpace + "*";

		for (int i = 0;i < height + 2;++i)
		{
			if(i ==0||i==height+1)
			{
				cout << top << endl;
			}
			else
			{
				cout << middle << endl;
			}
		}
	}
	if (type ==3)
	{
		cout << "How long do you want the base? (Must be odd and greater than 1) " << endl;
		int edge;
		cin >> edge;
		const int baseheight = (edge + 2 - 1)/2;

		for (int i = 0; i < baseheight;++i)
		{
			const string stars(2*i+1,'*');
			const string spaces((edge-(2*i+1))/2,' ');
			const string current = spaces + stars + spaces;
			cout << current << endl;
		}
	}
	return 0;
}
