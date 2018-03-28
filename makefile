CXXFLAGS = -g -Wall -Wfatal-errors -std=c++14

ALL = start

all: $(ALL)

start: main.cpp makefile
	$(CXX) $(CXXFLAGS) -o $@ $@.cpp

clean:
	$(RM) $(ALL) *.o
