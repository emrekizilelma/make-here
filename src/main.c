#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <make.h>
#include <getcwd.h>

int main(int argc, char* argv[]) {

    if (argc > 1) {
        if(!strcmp(argv[1], "C") || !strcmp(argv[1], "C++") || !strcmp(argv[1], "c") || !strcmp(argv[1], "cpp")) {
            printf("Yes\n");
            make_template(argv[1]);
        }

        else {
            printf("No argument given or wrong lang.\n");
        }
    }
  

    //get_cwd();

    //make_template();

    return 0;
}