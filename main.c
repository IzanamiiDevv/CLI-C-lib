#include <stdio.h>

//Include the Local Library
#include "cli.h"

/*-------------------|Example Usage|-------------------*/


int main(int argc, char* argv[]) {
    const char* name = scan_string("-name", argc, argv);
    int age = scan_int("-age", argc, argv);

    printf("Hello %s, you are now %i years old\n", name, age);
}