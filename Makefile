CC = gcc

CFLAGS = -Wall -Wextra -Werror -O0 -g -std=c11 -I
LDFLAGS = -lm

HEADERS = ls.h
OBJ = main.o ls.o 

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<  

go: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f ls.o main