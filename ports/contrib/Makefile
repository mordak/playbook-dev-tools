PREFIX=accounts/1000/shared/misc/clitools

SRCS=$(shell ls src/)

all: $(patsubst %.c,bin/%,$(SRCS))

bin/%:
	$(CC) src/$*.c -o bin/$*

install: 
	-mkdir -p $(DESTDIR)/$(PREFIX)/bin
	cp -r bin/* $(DESTDIR)/$(PREFIX)/bin/
