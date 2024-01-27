#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include <make.h>
#include <getcwd.h>

int main(int argc, char* argv[]) {

    if (argc > 1) {
        if(!strcmp(argv[1], "C") || !strcmp(argv[1], "C++") || !strcmp(argv[1], "c") || !strcmp(argv[1], "cpp")) {
            printf("Yes\n");
            make_template(argv[1]);
        }

        else {
            printf("No argument given\n");
        }
    }
  

    //get_cwd();

    //make_template();

    return 0;
}