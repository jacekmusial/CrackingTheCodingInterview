#include <iostream>
#include <string>
using namespace std;

void moveRight(int pos, int howMany, string &str) 
{
	int posOfLastChar = 0;
	for (int j = pos; j <= str.length(); ++j)
	{
		if (str[j] != ' ') 
		{
			posOfLastChar = j;
		}
	}//now we have posOfLastChar in str

	string a = str;
	for ( ; pos <= posOfLastChar; ++pos)
	{
		str[pos+2] = a[pos];
	}
}

string replaceAllSpaces(string &str) 
{
	string ret("");
	if (str.size() < 2) return ret;

	int i = 0;
	while (i < str.length()-3)
	{
		if (str[i] == ' ' && 
			str[i+1] != ' ' 
			&& str[i-1] != ' '
			)
		{
			moveRight(i, 3, str);
			str[i] = '%';
			str[i+1] = '2';
			str[i+2] = '0';
		}
		i++;
	}
}

int main()
{
	string a("Mr John Smith abe cad          ");

	cout << "Before: " << a << std::endl;
	replaceAllSpaces(a);
	cout << "After: " << a << std::endl;

	return 0;
}
