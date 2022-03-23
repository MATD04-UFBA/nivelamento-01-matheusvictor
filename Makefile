.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	exemplo0

exemplo0:  exemplo0.o 
	g++ -o $@ $^

clean:
	rm *.o exemplo0