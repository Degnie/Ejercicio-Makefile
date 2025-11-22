CC = gcc
CFLAGS = -Wall -std=c11

all: circunferencia

circunferencia: circunferencia.o
	$(CC) $(CFLAGS) -o circunferencia circunferencia.o

circunferencia.o: circunferencia.c
	$(CC) $(CFLAGS) -c circunferencia.c

clean:
	del *.o circunferencia.exe
