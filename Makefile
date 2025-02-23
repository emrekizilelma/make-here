CC = gcc
CFLAGS = -Wall -Wextra -std=c23
SRC = $(wildcard src/*.c)
INCLUDE = include
OUT = make_here

all: compile run


compile:
	$(CC) $(SRC) -o $(OUT) -I $(INCLUDE) $(CFLAGS)

run:
	./$(OUT)

clean:
	rm -rf $(OUT)
