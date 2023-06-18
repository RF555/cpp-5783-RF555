#!make -f
CXX=clang++-14
CXXFLAGS=-std=c++2a 

ifndef MAIN
  MAIN=./main.cpp
endif

all: 
	# $(CXX) $(CXXFLAGS) $(MAIN)
	$(CXX) $(CXXFLAGS) *.cpp
	./a.out

clean:
	rm -f *.o *.out *.exe test*
