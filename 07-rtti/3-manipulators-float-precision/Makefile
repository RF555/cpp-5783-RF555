#!make -f

CXX=clang++-14
CXXFLAGS=-std=c++2a -Wunused-comparison
RM=rm -f



ifndef MAIN
  MAIN=./main.cpp
endif

all: 
	$(CXX) $(CXXFLAGS) $(MAIN)
	./a.out
