# (c) 2015 Wojciech A. Koszek <wojciech@koszek.com>
SRCS_ALL:=$(wildcard *.c)
SRCS_EXCLUDED=test.c	# add1.c is gzip file (?)
SRCS=$(filter-out $(SRCS_EXCLUDED),$(SRCS_ALL))
OBJECTS:=$(SRCS:.c=.prog)
CFLAGS+=-Wall -pedantic -std=c99
IS_GCC = $(shell ${CC} --version | awk '/Free Software/ { i++ } END { print i ? "YES" : "NO" }')

ifeq ($(IS_GCC),YES)
CFLAGS+=-Wno-unused-but-set-variable	# ncurses macros set but not use variables
CFLAGS+=-Wno-address			# ncurses macros set some addresses too.
endif

all:	$(OBJECTS)

%.prog: %.c
	$(CC) $(CFLAGS) $< -o $@ -lcurses

clean:
	rm -rf *.prog
