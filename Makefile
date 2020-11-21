CXXFLAGS = -Wall -g
LDFLAGS = 

all: aurman

aurman:
	$(CXX) $(CXXFLAGS) -o $@.out $@.cpp $^ $(LDFLAGS)

clean:
	$(RM) aurman.out
