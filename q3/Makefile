calcPrimes: functions.o calcPrimes.o
	g++ -o calcPrimes functions.o calcPrimes.o
calcPrimes.o:
	g++ -g -Wall -pedantic -std=c++11 -c calcPrimes.cpp
functions.o: functions.h
	g++ -g -Wall -pedantic -std=c++11 -c functions.cpp
clean:
	rm -f core calcPrimes functions.o calcPrimes.o
