#TODO: Add targers to compile the program
GCC=gcc

programa: main.o functions.o functions.h
	$(GCC) -o programa main.c functions.c

functions.o: functions.c functions.h
	$(GCC) -c functions.c

main.o: main.c functions.h
	$(GCC) -c main.c

.PHONY: clean
clean:
	rm -f *.o programa




