#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

using namespace std;

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