#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void make_c() {
    system("touch Makefile1");

    FILE *in_file  = fopen("Makefile1", "r"); // read only
    FILE *out_file = fopen("Makefile1", "w"); // write only
          
          // test for files not existing.
          if (in_file == NULL || out_file == NULL)
            {  
              printf("Error! Could not open file\n");
              exit(-1); // must include stdlib.h
            }
          
          // write to file vs write to screen

        char* data;

          fprintf(out_file, "\n"); // write to file
}

void make_template(char* lang) {
    printf("\n[WORKING] make_template()\n");

    if(!strcmp(lang, "C") || !strcmp(lang, "C++") || !strcmp(lang, "c") || !strcmp(lang, "cpp")) {
            printf("Yes strcmp\n");
        }

    make_c();
    
}