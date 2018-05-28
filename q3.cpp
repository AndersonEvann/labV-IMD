#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include "functions.h"

using namespace std;


int main(int argc, char const *argv[])
{
	int num = stoi(argv[1], nullptr, 10);

	vector<int> val(num);

	for(int i = 0, j = 1; i < num; i++, j++) {
		val[i] = j;
	}

	cout << "Numeros primos [1 - " << num << "]: ";
	CalcPrimes(val.begin(), val.end());

	cout << endl;

	return 0;
}