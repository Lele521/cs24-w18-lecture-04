CXX  = g++
CXXFLAGS = -Wall -g 

all: point

point : overloaded.o point.o
	$(CXX) $(CXXFLAGS) $^ -o $@

overloaded.o: overloaded.cpp point.h
	$(CXX) $(CXXFLAGS) -c overloaded.cpp

point.o: point.cpp point.h
	$(CXX) $(CXXFLAGS) -c point.cpp

clean: 
	rm *.o point