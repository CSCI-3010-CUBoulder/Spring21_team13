# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# note that lines below targets must be
# TABBED in (not spaces!)

all: test

clean:
	rm test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test
