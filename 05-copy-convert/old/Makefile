# A generic makefile for running single-file C++ projects.
#
# AUTHOR: Erel Segal-Halevi

CXX=clang++-14
CXXFLAGS=-std=c++2a
RM=rm -f

ifndef MAIN
  MAIN=./main.cpp
endif

MAINEXECUTABLE=$(subst .cpp,,$(MAIN)).exe

SOURCES=$(MAIN)

all: $(MAINEXECUTABLE)
	$(MAINEXECUTABLE)

$(MAINEXECUTABLE): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(MAINEXECUTABLE)

valgrind:
	valgrind --tool=memcheck $(MAINEXECUTABLE)

clean:
	$(RM) *.exe a.out *.class
