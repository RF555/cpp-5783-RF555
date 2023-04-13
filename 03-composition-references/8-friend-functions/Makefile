# A generic makefile for running single-file C++ projects.
#
# AUTHOR: Erel Segal-Halevi

CXX=clang++-14
RM=rm -f
CPPFLAGS=-std=c++2a

ifndef MAIN
  MAIN=./friend.cpp
endif

MAINEXECUTABLE=$(subst .cpp,,$(MAIN)).exe

SOURCES=$(MAIN)

all: $(MAINEXECUTABLE)
	$(MAINEXECUTABLE)

$(MAINEXECUTABLE): $(SOURCES) $(HEADERS)
	$(CXX) $(CPPFLAGS) $(SOURCES) -o $(MAINEXECUTABLE)

valgrind:
	valgrind --tool=memcheck $(MAINEXECUTABLE)

clean:
	$(RM) *.exe a.out *.class
