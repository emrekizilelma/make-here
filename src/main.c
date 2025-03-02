#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char* file_name = "Makefile";

struct Lang {;
	char* flags;
};

bool is_file_exist(const char* file_name) {
	FILE* file = fopen(file_name, "r");
	bool is_exist = false;

	if(file != NULL) { is_exist = true; fclose(file); }
	return is_exist;
}

void make_c(const char* file) {
	if (is_file_exist(file)) {
		printf("[ERROR] File is already exist!");
	}
	else
		fopen(file_name, "w");
}

int main(int argc, char* argv[]) {
	if(strcmp(argv[1], "c") == 0) {
		struct Lang clang = {"gcc -Wall -Wextra std=c2x"};
		
	}
	return EXIT_SUCCESS;
}
