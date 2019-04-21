all: clean build run

clean: 
	rm target/trijam16.out

build:
	g++ src/main.c -o target/trijam16.out -lSDL2 -lSDL2_image

run:
	target/trijam16.out