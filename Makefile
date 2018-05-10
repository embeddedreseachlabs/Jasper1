cc =gcc
all:app
app:main.o add.o sub.o mul.o div.o
	$(cc) main.o add.o sub.o mul.o div.o -o app
main.o:main.c
	$(cc) -c main.c
add.o:add.c
	$(cc) -c add.c
sub.o:sub.c
	$(cc) -c sub.c
mul.o:mul.c
	$(cc) -c mul.c
div.o:div.c
	$(cc) -c div.c	
clean:
	rm -rf *.o app
