CC = cc
CFLAGS = -Wall -Wextra -Iinclude

SOURCES = $(wildcard source/*.c)
OBJECTS = $(SOURCES:.c=.o)

all: make

make: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) make
