all: test 

projname = cmagic
compile = g++

CPP_FILES := $(wildcard ./*.cpp)
CPP_FLAGS := -O0 -Wall -std=c++14

test: testcases clean

testcases: cmagic.h cmagic.cpp
	@if [ -f testfile ]; then mv testfile testfile.cpp; fi
	$(compile) $(CPP_FLAGS) $(CPP_FILES) testfile.cpp -o $(projname)
	@mv testfile.cpp testfile
	@./cmagic

clean:
	@rm -f $(projname)
