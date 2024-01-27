CC     = gcc
LIBS   = lib
CFLAGS = -g -Wall -pedantic -std=c17
FILES  = $(wildcard src/*.c)
OUT    = make_here
MAIN   =

all:
	$(CC) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)
	./$(OUT)


compile:
	$(CC) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)

run:
	./$(OUT)

clean:
	rm -rf $(OUT)
