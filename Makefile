CXXFLAGS = -Wall -g -static
LDFLAGS = 

all: main

main: aurman.o
	$(CXX) $(CXXFLAGS) -o $@.out $@.cpp $^ $(LDFLAGS)

aurman.o: aurman.cpp

test:
	$(CXX) $(CXXFLAGS) -o $@.out $@.cpp $^ $(LDFLAGS)

check: main
	./main.out install yay

clean:
	$(RM) main.out
	$(RM) aurman.o
	$(RM) test.out
