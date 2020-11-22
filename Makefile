CXXFLAGS = -Wall -g
LDFLAGS = 

all: aurman

main:
	$(CXX) $(CXXFLAGS) -o $@.out $@.cpp $^ $(LDFLAGS)

clean:
	$(RM) main.out
