CXXFLAGS = -Wall -g
LDFLAGS = 

all: main

main:
	$(CXX) $(CXXFLAGS) -o $@.out $@.cpp $^ $(LDFLAGS)

clean:
	$(RM) main.out
