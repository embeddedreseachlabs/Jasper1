CC =gcc

all:Myapp
Myapp:main.o add.o sub.o mul.o div.o
	$(CC) main.o add.o sub.o mul.o div.o -o Myapp
main.o:main.c
	$(CC) -c main.c
add.o:add.c
	$(CC) -c add.c
sub.o:sub.c
	$(CC) -c sub.c
mul.o:mul.c
	$(CC) -c mul.c
div.o:div.c
	$(CC) -c div.c
clean:
	rm -rf *.o app
