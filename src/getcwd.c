#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void get_cwd(){

    char *cwd;
    cwd = (char *)get_current_dir_name();
    printf("\n %s \n",cwd);
}