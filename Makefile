 
CC=gcc
CFLAGS=-Wall -Wextra

all: main

main: main.o second.o customer.o products.o
    $(CC) $(CFLAGS) -o main main.o second.o customer.o products.o

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

second.o: second.c
    $(CC) $(CFLAGS) -c second.c

customer.o: customer.c
    $(CC) $(CFLAGS) -c customer.c

products.o: products.c
    $(CC) $(CFLAGS) -c products.c

clean:
    rm -f *.o main
