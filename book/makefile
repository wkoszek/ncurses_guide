# (c) 2015 Wojciech A. Koszek <wojciech@koszek.com>
SRCS_ALL:=$(wildcard *.c)
SRCS_EXCLUDED=add1.c	# add1.c is gzip file (?)
SRCS=$(filter-out $(SRCS_EXCLUDED),$(SRCS_ALL))
OBJECTS:=$(SRCS:.c=.prog)
CFLAGS+=-Wall -pedantic -std=c99

all:	$(OBJECTS)

%.prog: %.c
	$(CC) $(CFLAGS) $< -o $@ -lcurses

clean:
	rm -rf *.prog
