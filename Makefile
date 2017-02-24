#target:  dependencies
#	recipe
#
CXXFLAGS = -std=c++11 -Wall -Wno-uninitialized

all: swap swap_point

swap: swap.o swap_test.o
	g++ $(CXXFLAGS) $^ -o $@ 

swap_point: swap_point.o
	g++ $(CXXFLAGS) $^ -o $@ 

clean:
	rm -f *.o swap
