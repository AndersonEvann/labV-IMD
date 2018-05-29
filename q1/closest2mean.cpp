/**
* @file closest2mean.cpp
* @brief Programa que calcula a media e retorna a posição mais proxixa no vector.
* @author Anderson Evangelista da Silva
* @since 28/05/2018
* @date 28/05/2018
*/

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