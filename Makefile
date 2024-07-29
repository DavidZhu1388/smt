build:
	gcc -Wall -std=c99 ./src/*.c -o kilo

run:
	./kilo

clean:
	rm main
