#include <iostream>
#include <vector>

#include "functions.h"

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v{1, 2, 3, 30, 40, 50};
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;

	return 0;
}