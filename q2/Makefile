printElements: functions.o printElements.o
	g++ -o printElements functions.o printElements.o
printElements.o:
	g++ -g -Wall -pedantic -std=c++11 -c printElements.cpp
functions.o: functions.h
	g++ -g -Wall -pedantic -std=c++11 -c functions.cpp
clean:
	rm -f core printElements functions.o printElements.o
