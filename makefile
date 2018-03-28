CXXFLAGS = -g -Wall -Wfatal-errors -std=c++14

ALL = master

all: $(ALL)

master: master.cpp makefile
	$(CXX) $(CXXFLAGS) -o $@ $@.cpp

clean:
	$(RM) $(ALL) *.o
