#include <iostream>
#include <set>

#include "functions.h"

int main(int argc, char const *argv[])
{
	set<int> numbers;
	numbers.insert(3);
	numbers.insert(1);
	numbers.insert(4);
	numbers.insert(1);
	numbers.insert(2);
	numbers.insert(5);

	print_elements(numbers, "Set: ");
	print_elements(numbers, "CSV Set: ", ';');

	return 0;
}