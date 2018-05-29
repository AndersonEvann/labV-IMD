/**
* @file CalcPrimes.cpp
* @brief Programa que retorna na tela os números primos de 1 a N(com N sendo informado por linha de comando).
* @author Anderson Evangelista da Silva
* @since 28/05/2018
* @date 28/05/2018
*/

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