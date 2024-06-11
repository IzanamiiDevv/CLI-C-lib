/*You dont realy need to download this just install the cli.h script
or copy it into your own header file for it to work*/

#include "cli.h"

int scan_int(const char* args, int argc, char* argv[]) {
    int data = 0;
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], args) == 0 && i + 1 < argc) {
            data = atoi(argv[i + 1]);
        }
    }
    return data;
}

char* scan_string(const char* args, int argc, char* argv[]) {
    char* data = NULL;
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], args) == 0 && i + 1 < argc) {
            data = argv[i + 1];
        }
    }
    return data;
}
