/*
 * Topic   : #include
 * Module  : 13 - Preprocessor and Modular Programming
 *
 * #include inserts file contents before compilation.
 *
 *   #include <stdio.h>   system/library headers (search system paths)
 *   #include "file.h"   project headers (current folder first)
 *
 * Compile: gcc "01 include.c" -o pp01
 */

#include <stdio.h>
#include "local_demo.h"

int main(void)
{
    printf("=== #include ===\n\n");
    printf("<stdio.h> gives printf.\n");
    printf("Local header says: %s\n", LOCAL_MESSAGE);

    return 0;
}
