CXXFLAGS = -Wall -g -static
LDFLAGS = 

all: main

main: aurman.o
	$(CXX) $(CXXFLAGS) -o $@.out $@.cpp $^ $(LDFLAGS)

aurman.o: aurman.cpp

clean:
	$(RM) main.out
	$(RM) aurman.o
