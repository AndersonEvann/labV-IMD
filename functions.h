#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

using namespace std;

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last);

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

#endif