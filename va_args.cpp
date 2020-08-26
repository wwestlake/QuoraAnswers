

#include <stdio.h>
#include <stdarg.h>

#define error_print(...) fprintf(stderr, __VA_ARGS__)


int main(void)
{
    error_print("This is an error: %s\n", "Some message");

    return 0;
}




