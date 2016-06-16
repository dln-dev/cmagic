all: main

projname = example.out
compile = g++

CPP_FILES = $(wildcard ./*.cpp)
CC_FLAGS = -O2 -Wall

main: $(CPP_FILES)
	$(compile) $(CC_FLAGS) $^ -o $(projname)

clean:
	rm -rf $(projname)
