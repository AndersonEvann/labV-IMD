/**
* @file functions.h
* @brief Aqui estão todas as funções necessarias para as 3 questões.
* @author Anderson Evangelista da Silva
* @since 28/05/2018
* @date 28/05/2018
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

using namespace std;
/** @details Função que calcula a media dos valores de um conteiner e retorna
	a posição a qual o valor estão mais proximo da media.
*/

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last) {
	int sum = 0, cont = 0;
	InputIterator value, it;
	for(it = first; it < last; it++) {
		sum += *it;
		cont++;
	}
	int result = sum / cont;
	value = first;
	it = first++;
	while(it <= last) {
		if(*it < result && *value < result) {
			if(result - *it < result - *value) {
				value = it;
			}
		} else if(*it < result && *value > result) {
			if(result - *it < *value - result) {
				value = it;
			}
		} else if(*it > result && *value < result) {
			if(*it - result < result - *value) {
				value = it;
			}
		} else if(*it > result && *value > result) {
			if(*it - result < *value - result) {
				value = it;
			}
		} else {
			if(*it == result) {
				return it;
			} else {
				return value;
			}
		}
		it++;
	}

	return value;
}

/** @details Função que dado um conteiner apresenta seus valores de acordo com
	o label e o separador escolhido.
*/

template <typename TContainer>
void print_elements(const TContainer &collection, const char *label="", const char separator=' ') {
	cout << label;
	for(auto it = collection.begin(); it != collection.end(); it++) {
		if(it == collection.end()) {
			cout << *it;
		} else {
			cout << *it << separator;
		}
	}
	cout << endl;
}

/** @details Função que imprime na tela os numeros primos de um determinado
	conteiner passado por linha de comado.
*/

template<typename InputIterator>
void CalcPrimes(InputIterator first, InputIterator last) {
	auto it = first;
	int count = 0;
	while(it != last) {
		for(int i = 1; i <= *it; i++) {
			if(*it % i == 0) {
				count++;
			}
		}
		if(count <= 2) {
			cout << (*it) << " ";
		}
		it++;
		count = 0;
	}
}

#endif