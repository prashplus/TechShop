CXXFLAGS = -g -Wall -Wfatal-errors -std=c++14

ALL = main

all: $(ALL)

main: master.cpp makefile
	$(CXX) $(CXXFLAGS) -o $@ $@.cpp

clean:
	$(RM) $(ALL) *.o
