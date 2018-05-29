/**
* @file q4.cpp
* @brief Programa que imprime o quadrado do numero passado para o conteiner col.
* @author Silvio Costa Sampaio
* @since 28/05/2018
* @date 28/05/2018
*/

#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
using std::back_inserter;

#include <vector>
using std::vector;

#include <algorithm>
using std::transform;

int square(int val) {
	return val * val;
}

int main(int argc, char const *argv[])
{
	vector<int> col;
	vector<int> col2;

	for(int i = 1; i <= 9; ++i) {
		/** @brief push_back adiciona no fim do conteiner. */
		col.push_back(i);
	}
	/** @details transform insere os valores de col elevado ao quadrado no fim do
		conteiner col2, utilizando a função square. 
	*/
	transform(col.begin(), col.end(), back_inserter(col2), square);

	for(vector<int>::iterator it = col2.begin(); it != col2.end(); ++it) {
		cout << (*it) << " ";
	}
	cout << endl;

	return 0;
}