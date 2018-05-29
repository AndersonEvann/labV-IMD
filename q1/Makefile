closest2mean: functions.o closest2mean.o
	g++ -o closest2mean functions.o closest2mean.o
closest2mean.o:
	g++ -g -Wall -pedantic -std=c++11 -c closest2mean.cpp
functions.o: functions.h
	g++ -g -Wall -pedantic -std=c++11 -c functions.cpp
clean:
	rm -f core closest2mean functions.o closest2mean.o
