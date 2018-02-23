#include <iostream>
#include <list>
#include <string>

#include "Stack.h"

using std::cout;
using std::endl;
using std::string;
using std::list;

string dec_to_bin(int dec) 
{
	string bin;
	stack s;

	while (dec > 0) {
		s.push(dec % 2);
		dec = dec / 2;
	}

	while (s.size() > 0) {
		if (s.pop() == 0) {
			bin.append("0");
		}
		else {
			bin.append("1");
		}
	}
	return bin;
}

void application() 
{
	int number = 1;

	while (number != 0) {
		std::cin >> number;
		cout << dec_to_bin(number) << endl;
	}

	system("Pause");
}

int main()
{
	application();

	return 0;
}