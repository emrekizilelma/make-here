#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char* target = "Makefile";

bool is_file_exist(const char* file_name) {
	FILE* file = fopen(file_name, "r");
	bool is_exist = false;

	if(file != NULL) { is_exist = true; fclose(file); }
	return is_exist;
}

void make_c(const char* file_name) {
	if (is_file_exist(file_name)) { printf("[ERROR] File is already exist!"); }

	else {
		FILE* file_ptr = fopen(file_name, "w");
		fprintf(file_ptr, "CC = gcc
						   CFLAGS = -Wall -Wextra -std=c2x
						   SRC = $(wildcard src/*.c)
					       OUT = make_here

						   all: compile run


						   compile:
						  	   $(CC) $(SRC) -o $(OUT) $(CFLAGS)

						   run:
						   	  ./$(OUT)

						   clean:
   						       rm -rf $(OUT)");
	}
}

int main(int argc, char* argv[]) {
	if(strcmp(argv[1], "c") == 0) {
		make_c(target);
	}
		
	return EXIT_SUCCESS;
}
