CC = gcc
CFLAGS = -Wall -Wextra -std=c2x
SRC = $(wildcard src/*.c)
OUT = make_here

all: compile run


compile:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)

run:
	./$(OUT)

clean:
	rm -rf $(OUT)

