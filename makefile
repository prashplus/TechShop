CXXFLAGS = -g -Wall -Wfatal-errors -std=c++14

ALL = main

all: $(ALL)

main: main.cpp makefile
	$(CXX) $(CXXFLAGS) -o $@ $@.cpp

clean:
	$(RM) $(ALL) *.o
