CC     = gcc
LIBS   = lib
CFLAGS = -g -Wall -pedantic -std=c17
FILES  = $(wildcard src/*.c)
OUT    = out
MAIN   = main.c

all:
	$(CC) $(MAIN) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)
	./$(OUT)


compile:
	$(CC) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)

run:
	./$(OUT)

clean:
	rm -rf $(OUT)