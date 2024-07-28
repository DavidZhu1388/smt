build:
	gcc -Wall -std=c99 ./src/*.c -o main

run:
	./main

clean:
	rm main