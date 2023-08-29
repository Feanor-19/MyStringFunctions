#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"

int main()
{
    size_t str_size = 4;
    char *str = (char*) calloc(str_size, sizeof(char) );

    size_t bytes = my_getline(&str, &str_size, stdin);

    printf("bytes = %d, str_size = %d, str = %s", bytes, str_size, str);

    return 0;
}
