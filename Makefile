.PHONY: all clean test
CFLAGS = -Wall -Werror -fPIC -MP -MMD

all: bin/equation

bin/equation: build/main.o build/function.o
	@mkdir -p bin/
	@gcc $(CFLAGS) build/main.o build/function.o -o bin/equation -lm

build/main.o: src/main.c src/function.h
	@mkdir -p build/
	@gcc $(CFLAGS) -c src/main.c -o build/main.o -lm

build/function.o: src/function.c src/function.h
	@mkdir -p build/
	@gcc $(CFLAGS) -c src/function.c -o build/function.o

hello: bin/hello
bin/hello: Hello_world.cpp
	@mkdir -p bin/
	@g++  Hello_world.cpp -o bin/hello

test: bin/equation_test
	./bin/equation_test
bin/equation_test: build/tests/test_func.o build/tests/main.o build/function.o
	@mkdir -p bin/
	@gcc $(CFLAGS) build/tests/main.o build/tests/test_func.o build/function.o -o bin/equation_test -lm
build/tests/main.o: tests/main.c src/function.h
	@mkdir -p build/
	@mkdir -p build/tests/
	@gcc $(CFLAGS) -I thirdparty -c tests/main.c -o build/tests/main.o -lm
build/tests/test_func.o: src/function.h tests/test_func.c
	@mkdir -p build/
	@mkdir -p build/tests/
	@gcc $(CFLAGS) -I thirdparty -c tests/test_func.c -o build/tests/test_func.o
build/tests/function.o: src/function.c src/function.h
	@mkdir -p build/
	@mkdir -p build/tests/
	@gcc $(CFLAGS) -c src/function.c -o build/tests/function.o

clean:
	#rm *.exe
	rm -r build
	rm -r bin
