all: a.out clean

	
a.out: main.o myBank.o
	gcc -Wall -o a.out main.o myBank.o

main.o: main.c myBank.h
	gcc -Wall -c main.c

myBank.o: myBank.c myBank.h
	gcc -Wall -c myBank.c

clean:
	rm *.o